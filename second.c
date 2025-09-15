#include <stdio.h>

int main(){
	int age = 10;
	float weight = 10.7;
	char grade = 'A';
	// these are basic type of data, we also have something called char *, its like an array of characters
	printf("The age %d \n", age);
	// we use %d as a placeholder for decimal numbers, and printf doesnt ends the line itself, so we use \n to end a line
	printf("Grade: %c \n", grade);
	// similarly we use %c as a placeholder for character type
	printf("weight: %f \n", weight);
	// we use %f for float types

	// we can also do something like this,
	int alone;
	alone = 100;
	// here we first declared then initialized

	// in C we dont have strings, just use array of char i.e char *
	char *name = "ADARSH";
	// note: 'c' != "c", to define char we use single quotes, for char * aka fake strings we use double quotes " "

	printf("name: %s \n", name); // so for something "like" string we use %s
	// we can have multiple ones at a time
	printf("My name is %s and i am %d years old \n", name, age);

	// we can declare variables only once, but we can change the value of a variable, since by deault variable is C are mutable..
	age = 19;
	printf("age: %d \n", age);
	// but we can make a variable immutable/ constant, we use keyword const
	const int age2 = 10; // this variable cant be changed, and yes we can use numbers in variables
	printf("constand age: %d \n", age2);
	return 0;
}