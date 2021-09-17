//Write a program which accept one number from user and print that number of even mumbers on screen
#include "Header.h"
int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}