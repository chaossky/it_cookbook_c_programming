#include <stdio.h> 
// #define STR(Y, M, D) YMD 
// #define STR(Y, M, D) Y M D 
#define STR(Y, M, D) Y ## M ## D 

int main() 
{ 
	printf("생년월일 : %d\n", STR(11, 06, 10));
	printf("생년월일 : %d\n", STR(10, 11, 25));

	return 0;
} 

