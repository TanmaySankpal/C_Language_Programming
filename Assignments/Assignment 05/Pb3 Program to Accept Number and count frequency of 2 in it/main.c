/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Program which accept number from user and count frequency of 2 in it
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=CountTwo(iValue);
	printf("frequency of 2 in %d is %d",iValue,iRet);
	
	return 0;
}