#include <stdio.h>

// first we will print out something like a table with 20 in difference between each values
void main(){
	int fahr, celsius;
	int lower, upper, step;
	// lower will be where the table starts, upper will be the value when the table ends and the step will the difference between each value
	lower =0;
	upper = 300;
	step = 20;
	fahr = lower; // starting with lower
	while (fahr <= upper){
		celsius = 5 *(fahr - 32)/9; // this the fromula to convert fahr to cel,
		// here we divide by 9 and multiply bu 5 separately, becasue since both 5 and 9 are integers, their result will be truncated to integer, removing the decimel part
		// therefore making 5/9 = 0
		//printf("%d\t%d\n", fahr, celsius); // using tab to create space between them...
/*output:
0       -17
20      -6
40      4
60      15
80      26
100     37
120     48
140     60
160     71
180     82
200     93
220     104
240     115
260     126
280     137
300     148
*/

		printf("%3d %6d \n", fahr, celsius);// this time instead of \t we have haev ourself specified a particalur width of space to leave...
		/*output: 
  0    -17
 20     -6
 40      4
 60     15
 80     26
100     37
120     48
140     60
160     71
180     82
200     93
220    104
240    115
260    126
280    137
300    148
		*/
		fahr +=step;
	}
	// well since we are using int, we are not getting the accurate values...
	float fahr1, celsius1;
	float lower1, upper1, step1;
	// we have defined all types as float, 
	lower1 = 0.0; 
	upper1 = 300.0;
	step1 = 20.0;
	// everything is being defined as float
	fahr1 = lower1;
	while(fahr1<=upper1){
		celsius1 = (5.0/9.0) *(fahr1-32.0); // here instead if the new float fahr1, we can use the int fahr, cause the compiler will convert it into a float,
		// becasue there is a operation taking place where we also have a floating point, same if we used fahr1 - 32, the 32 would become 32.0 since fahr1 is floating point
		// now we can perform 5.0/9.0 unlike before, we have float values, so the result wont truncate to 0,
		printf("%3.0f %6.2f\n",fahr1, celsius1); // same as before after % we specifing the width, but the next part before f, is rounding off decimal part to a limited number..
		// .0f says no fraction value and no decimel point, .2f says, 2 digit fraction value after decimel point
		/*output:
  0 -17.78
 20  -6.67
 40   4.44
 60  15.56
 80  26.67
100  37.78
120  48.89
140  60.00
160  71.11
180  82.22
200  93.33
220 104.44
240 115.56
260 126.67
280 137.78
300 148.89
*/
		// the outputs are more recise then before 
		fahr1 = fahr1 +step1;
	}
	// if we want to do the same with celsius..
	celsius1 = lower1;
	while(celsius1<=upper1){
		fahr1 = ((5.0/9.0)*celsius1) + 32.0;
		printf("%3.0f %6.2f\n",celsius1, fahr1);
		celsius1 += step1;
	}
	/*output:
  0  32.00
 20  43.11
 40  54.22
 60  65.33
 80  76.44
100  87.56
120  98.67
140 109.78
160 120.89
180 132.00
200 143.11
220 154.22
240 165.33
260 176.44
280 187.56
300 198.67
*/
	// now instead of while loop, we can also use for loop
	for(fahr1 = 0; fahr<=300; fahr +=step1){
		printf("%3d %6.2f\n", fahr1, (5.0/9.0)*(fahr1-32.0)); // we can also send expression in and its result will be calculated and displayed
	}
	for(float f = 300.0f; f >=0.0f; f -=20.0f){
		float c = (5.0f / 9.0f) * (f - 32.0f);
		printf("%3.0f %6.2f\n",f,c);
	}
}

// note: we have something like short and long for short and long integers
/*note: If an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one 
floating-point operand and one integer operand, however, the integer will be converted to floating point before the 
operation is done.
*/ 
/*The foramting will be like:
%d: print as decimal integer
%6d: print as decimal integer, at least 6 characters wide
%f print as floating point
%6f print as floating point, at least 6 characters wide
%.2f print as floating point, 2 characters after decimal point
%6.2f print as floating point, at least 6 wide and 2 after decimal point
%o for octal values
%x hexadecimal values
%% for itself
*/