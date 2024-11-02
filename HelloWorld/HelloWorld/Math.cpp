/*First - Where we are including a preprocessor with a header file we created*/
//int Multiply(int a, int b) {
//	int result = a * b;
//	return result;
//#include "EndBrace.h"


/*Second - We are including a preprocessor using define keyword to make INTEGER as CPP so that we can view the same in Math.i file*/
//#define INTEGER CPP
//
//INTEGER multiply(int a, int b) {
//	INTEGER result = a * b;
//	return result;
//}


/*Third - same thing and here we are using if with 1 or 0 to tell the compiler whether or not to include the code in between them */
//#if 1
//#define INTEGER CPP
//
//INTEGER multiply(int a, int b) {
//	INTEGER result = a * b;
//	return result;
//}
//#endif

//#if 0
//#define INTEGER CPP
//
//INTEGER multiply(int a, int b) {
//	INTEGER result = a * b;
//	return result;
//}
//#endif


/*Fourth - To see the things the .i file includes after i add the iostream header file*/
#include <iostream>

int Multiply(int a, int b) {
	int result = a * b;
	return result;
#include "EndBrace.h"

