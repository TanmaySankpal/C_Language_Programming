//////////////////////////////////////////////////////////////////////////
//
//  Function name :     DisplayDigit
//  Input :             Integer
//  Output :            void(nothing)
//  Description :       It used to Display Digit in reverse order
//  Author :            Tanmay
//  Date :              14/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"

void DisplayDigit(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}