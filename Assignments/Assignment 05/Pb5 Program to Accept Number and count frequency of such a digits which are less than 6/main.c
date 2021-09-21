/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Program which accept number from user and count frequency of less than 6 digits
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=Count(iValue);
	printf("frequency of less than 6 in %d is %d",iValue,iRet);
	
	return 0;
}