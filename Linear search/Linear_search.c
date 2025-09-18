#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // to use true or false cases, we have to include this too, this also lets us define bool datatype value...
#define ARRAY_LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))
// with define, we are kinda creating a Alisa for this whole operation...
int i = 0;
// if we are defining any function after the main, we have to first declare them before main, these are called prototype functions
int linear_search(int arr[], int n, int target);
int linear_search2(int arr[], int n, int target);
int linear_search3(int arr[], int n, int target);
int main(void){
	
	int n = 1000000;
	int *arr = malloc(n*sizeof(int));
	for(int i = 0; i <n; i++){
		arr[i] = i;
	}
	int target, result;
	char Choice;
	while (true){
	printf("Enter the target you want to locate: ");
	scanf("%d", &target);
	int result = linear_search3(arr, n, target);
	if (result == -1){
			printf("The given target %d is not found \n", target);
	}else{
		printf("The target %d is now at %d index positon\n", target, result);
	}
	while (getchar() != '\n'); // we use this to clear out any left out inputs from the previous inputs...
	printf("Do you want to find any other element (Y/N): ");
	scanf("%c", &Choice);
	if (Choice == 'N'|| Choice == 'n'){
		printf("Thanks for using our algo... \n");
		break;
	}else if (Choice == 'Y' || Choice == 'y'){
		continue;
	}else{
		printf("Invalid input... breaking out cause you dumb as f");
		break;
	}
	printf("\n");
}
	return 0;
}
int linear_search(int arr[], int n, int target){
	for(i = 0; i < n; i++){
			if (target == arr[i]){
					return i;
			}
	}
	return -1;
}
// this a optimized version, it puts the recently accessed element on the starting of the array, which makes it easier to access if again needed,
// so its like keeping the most accessed element at the beginning making it easier to access them..., but this alters the elements postion in the array
int linear_search2(int arr[], int n, int target){
	for(i = 0; i < n; i++){
			if(target == arr[i]){
				if(i !=0){
					int temp = arr[i];
					arr[i] = arr[0];
					arr[0] = temp;
				}
				printf("Found %d at %d\n", target, i);
				return i;
			}
	}
	return -1;
}

// here instead of direclty sending the recently accessed array at the beginning, we will send it 1 step closer to start of the array
int linear_search3(int arr[], int n, int target){
	for(i = 0; i < n; i++){
		if(target == arr[i]){
			if(i!=0){
				int temp = arr[i]; // moving the element closer to start.... 
				arr[i] = arr[i-1];
				arr[i-1] = temp;
			}
			printf("Found %d at %d\n", target, i);
			return i;
		}
	}
	return -1;
} // by doing this the most access elements will be closer to the beginning....

