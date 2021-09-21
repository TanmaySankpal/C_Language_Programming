/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Program which accept number from user and count frequency of 4 in it
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=CountFour(iValue);
	printf("frequency of 4 in %d is %d",iValue,iRet);
	
	return 0;
}