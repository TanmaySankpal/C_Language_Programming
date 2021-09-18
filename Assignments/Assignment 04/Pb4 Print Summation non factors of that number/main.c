//Write a program which accept one number from user and print all non factors of that number
#include "Header.h"
int main()
{
	int iValue=0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=SumNonFact(iValue);
	printf("Sum of Non Fact=%d\n",iRet);
	return 0;
}