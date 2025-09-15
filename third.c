#include <stdio.h> // the .h tells its a header files
// we can create out own header file and then include it and use its functions

// we can also define functions, with or without return tyoe, which we have write just like main function

float add(int x, int y){
	return (float)(x+y);
}
// here we created a function of return type float, with taking 2 int values as argumentts, 
// when we add 2 int values, we get a int value, but since we have already declared that this function will return float, we use type caste/ converstion
// (float) convertes the int to float type, and then is returned

// rest of the other types are similar, but we can have a type with no return values, then we use "void"
void printer(char grade){
	printf("The gives grades are: %c \n", grade);
}

// there is another use case of void, since its just like a data type but with no value, we can use it to say, we are passing no argumet
int pos(void){
	int earth = 3; 
	printf("earth is the %drd planet in the solar system \n", earth);
	return earth;

}

int main(void){ // since in void we dont take any arguments, so we can put void there too
	int x = 10;
	int y = 20;
	float sum; // declared a float type variable
	sum = add(x, y); // we are send the defined int values as parameter, which underdoes their operations and return a float value
	// the returned float value is then stored in sum
	printf("some of 2 integers in float is: %f \n", sum); // note that sum is a float type, so we will use %f placeholder..
	
	char grade = 'Z';
	printer(grade); // this doesnt return anything, just prints 

	int earth = pos(); // here we are sending no paramters, but we are getting return value
	// void x =	None, is invalid

	// in C we have math operation, + - * /, we also have +=, -=, *= , /=
	// so x = x + 10  is same as  x+=10, we just add 10 the existng value of x
	// we also have something called increment and decrement opetion like ++ --
	// so x = x+1 is same as x+=1 and is same as x++ same with the x--
	// here we can also write it as x++ or ++x, these both have different effects if used to initialization of a variable
	int a = 5;
	int b = a++;
	printf("postfix a++: %d \n", b); // here b = 5
	a = 5;
	b = ++a;
	printf("prefix ++a: %d \n", b); // here b = 6
// both these print statments will give different answers, 
	// in postfix, first a's value is assigned to b then a it incremented by 1,
	// in prefix, first a is incremented with 1 then assigned to b

	return 0;
}