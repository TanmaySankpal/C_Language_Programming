/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Program which accept number from user and return the count of digits in between 3 and 7
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=CountRange(iValue);
	printf("Count of Digits in between 3 to 7 in %d are %d",iValue,iRet);
	
	return 0;
}