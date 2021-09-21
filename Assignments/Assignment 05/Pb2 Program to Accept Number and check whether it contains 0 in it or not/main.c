/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Program which accept number from user and chack whether it contains 0 in it or not
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet=ChkZero(iValue);
	if(bRet==TRUE)
	{
		printf("It contains Zero");
	}
	else
	{
		printf("It does not contains Zero");
	}
	
	return 0;
}