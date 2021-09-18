//Write a program which accept one number from user and print Multiplication of  factors of that number
#include "Header.h"
int main()
{
	int iValue=0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=MultFact(iValue);
	printf("Multiplication of factor is %d",iRet);
	return 0;
}