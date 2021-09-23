//////////////////////////////////////////////////////////////////////////
//
//  Function name :     CountRange
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to Count of digit in between 3 to 7
//  Author :            Tanmay
//  Date :              14/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"

int CountRange(int iNo)
{
	int iDigit=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>3&&iDigit<7)
		{
			iSum=iSum+1;
		}
		iNo=iNo/10;
	}
	return iSum;
}