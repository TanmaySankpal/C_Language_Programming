//Write a program which accept one number from user and return differance between summation of all its factors and non factors
#include "Header.h"
int main()
{
	int iValue=0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=FactDiff(iValue);
	printf("Differance of Sum of Fact and Non Fact=%d\n",iRet);
	return 0;
}