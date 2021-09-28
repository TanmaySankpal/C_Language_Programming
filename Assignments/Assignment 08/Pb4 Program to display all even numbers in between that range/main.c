/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept range from user and 
//  display all even numbers in between that range.
//	Input : 23 35
// 	Output : 24 26 28 30 32 34
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("Enter Starting number..");
	scanf("%d",&iValue1);
	
	printf("Enter Ending number..");
	scanf("%d",&iValue2);
	
	iRet=RangeSumEven(iValue1,iValue2);
	printf("Sum %d",iRet);
	return 0;
}