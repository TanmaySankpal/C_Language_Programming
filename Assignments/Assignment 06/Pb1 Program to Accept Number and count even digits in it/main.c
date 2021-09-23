/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Program which accept number from user and return the count of even digit
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=CountEven(iValue);
	printf("Even Digits in %d is %d",iValue,iRet);
	
	return 0;
}