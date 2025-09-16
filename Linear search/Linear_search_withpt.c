#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
// this is library which can bring in functions for threading

typedef struct // we are creating a struct, with typedef struct, and adding the needed values
{
	int *arr; // this is a pointer to the array
	int start; // starting index for this thread to search
	int end; // ending index(exclusive)
	int target; // value we are looking for
	int result; //where we will store the result
} SearchData; // created an instance of the this struct

void* searchchunk(void* arg){ // we use void* in argument to show, its can point to anything 
	SearchData *data = (SearchData*)arg; // we are converting void* argument back to our SearchData	type
	// right now we dont have the SearchData type itself but a pointer which is pointing to a type SeachData
	for(int i = data->start; i < data->end; i++){ // here we are using -> operator to access the value of a struct through pointer to it, if we directly had structure we would . but since we have a pointer to it we use ->
		if(data->arr[i] == data->target){
			data->result = i;
			pthread_exit(NULL);
		}
	}
	data->result = -1;
	pthread_exit(NULL);
}
int parallelLinearSearch(int arr[], int n, int target, int numThreads){
	pthread_t threads[numThreads]; // an array of type pthread_t, to hold thread IDS
	SearchData threadData[numThreads]; // an array of type SearchData to hold thread data
	int chunkSize = n / numThreads; // will tell how much each thread will get to work wiht

	// here with for loop, we will create threads one-by-one and launch them
	for(int i = 0; i < numThreads; i++){
		threadData[i].arr = arr;
		threadData[i].start = i*chunkSize; // tell the threads where to start from
		if(i == numThreads - 1){ // checks if its the last thread
			threadData[i].end = n; // if so, then assigns the end/ stopping point to the end of the array
		}else{
			threadData[i].end = (i+1)*chunkSize; // if not, then end will (thread's number like first thread, second so on..) multiplied by chunksize
		}
		if(pthread_create(&threads[i], NULL, searchchunk, &threadData[i]) !=0){
			printf("Error creating thread %d \n", i);
			return -1;
		}
	}
	for(int i = 0; i < numThreads; i++){
		pthread_join(threads[i], NULL);
		
		//if this thread found the target...
		if(threadData[i].result != -1){
			return threadData[i].result;
		}
	}
	// if no thread could find the target
	return -1;
}

// now the main function..
int main(){
	int n = 1000000; // a large data set, since this threading good only if we are having a long list of data to scan through 
	int *arr = malloc(n*sizeof(int)); // allocates memory dynamically 
	for(int i = 0; i < n; i ++){
		arr[i] = i;
	}
	int target;
	printf("Enter the target to search (0 to %d): ", n-1);
	scanf("%d", &target);
	int result = parallelLinearSearch(arr, n, target, 4);
	if (result == -1){
		printf("traget %d not found..", target);
	}else{
		printf("Target %d found at index %d\n", target, result);
	}
	return 0;
}
