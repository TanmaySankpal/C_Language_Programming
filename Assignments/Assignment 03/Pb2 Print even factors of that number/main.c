//Write a program which accept one number from user and print even factors of that number
#include "Header.h"
int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	DisplayFactor(iValue);
	return 0;
}