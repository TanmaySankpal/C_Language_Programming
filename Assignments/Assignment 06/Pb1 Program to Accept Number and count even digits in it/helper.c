//////////////////////////////////////////////////////////////////////////
//
//  Function name :     CountEven
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to Count Even Digit in number
//  Author :            Tanmay
//  Date :              14/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"

int CountEven(int iNo)
{
	int iDigit=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSum=iSum+1;
		}
		iNo=iNo/10;
	}
	return iSum;
}