#include <stdio.h> // this is a library, called standard library, we can now use the functions from this library
// we use #include to bring them in scope

int main(){ // this is where we write the main prog in main func
	printf("Hello, word! \n"); // printf is a func from stdio which prints anything thats inside of it, printf = print formated
	printf("And hello to you too, you seem like traveller who has somehow returned to the same tree");
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


