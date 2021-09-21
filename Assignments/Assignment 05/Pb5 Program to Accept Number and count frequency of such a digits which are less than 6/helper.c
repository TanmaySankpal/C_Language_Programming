//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Count
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to Count Freqvency of such a digits which are less than 6
//  Author :            Tanmay
//  Date :              14/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"

int Count(int iNo)
{
	int iDigit=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			iSum=iSum+1;
		}
		iNo=iNo/10;
	}
	return iSum;
}