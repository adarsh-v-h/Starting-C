#include <stdio.h> // this is a library, called standard library, we can now use the functions from this library
// we use #include to bring them in scope, 
// we start with # distinguihes them form other characters in C

int main(void){ // this is where we write the main prog in main func, it is called automatically when the program is ran 
	// the void in the parameter says no parameter
	printf("Hello, word! \n"); // printf is a func from stdio which prints anything thats inside of it, printf = print formated
	printf("And hello to you too, you seem like traveller who has somehow returned to the same tree \n");
	float f = 0.1f; // we write f so that the compiler doesnt think it as double and then convert it to float, so to avoid that conversion and directly create float we use f
	/*so have have similar suffix for int too, 
	// Integer suffixes
	100     // int
	100U    // unsigned int  
	100L    // long
	100UL   // unsigned long
	100LL   // long long

	// Floating-point suffixes
	100.0   // double
	100.0f  // float
	100.0L  // long double*/
	float ch = 100.0L; // created as long double converted to long float 
	printf("%f\n", ch);
	if (f == 0.1){ // this be a false, since we cant exaclty store 0.1 as a value in binary, so we will be storing something like 0.0999987 smtg
		printf("OK \n");
	}else{
		printf("not ok\n");
	}
	printf("%f", f); // this will return 0.1 itself because it gets rounded off it when its passed as a parameter to the function printf
	return 0; // this returns 0 to the OS when execution is done
}
// if we want to run the code, we have to run some operations on this file, 
/*first the .c exetension is imp for the complier to recognise it,
next: The program is first given to a preprocessor, which obeys commands that begin with # (known as directives).
A preprocessor is a bit like an editor; it can add things to the program and make modifications
next: The modified program now goes to a compiler, which translates it into machine instructions (object code).
The program isn’t quite ready to run yet, however.
In the final step, a linker combines the object code produced by the compiler with any additional code needed to yield a complete executable program.
This additional code includes library functions (like printf) that are used in the program.*/

// In this whole course, i will be using gcc to compile, we can add a flag to make things more understand able, 
// i.e -o flag, syantx: gcc file_name.c -o file_name, this creates a executable file with the same name as of the file, instead of a.exe


// most programs follow a general template,
/*
directives
int main(void)
{
	statements;
}
*/
// in the printf func we used \n to move to new line, cause printf by itself doesnt do that, and also we can use \t for tab, \b backspace, \" to use quotations and \\ to use the backslash...
// there are many more but these are the most used..
	

