//////////////////////////////////////////////////////////////////////////
//
//  Function name :     DisplayDigit
//  Input :             Integer
//  Output :            BOOL(int)
//  Description :       It used to Check number contain zero digit or not
//  Author :            Tanmay
//  Date :              14/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"

BOOL ChkZero(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return TRUE;
		}
		iNo=iNo/10;
	}
	return FALSE;
}