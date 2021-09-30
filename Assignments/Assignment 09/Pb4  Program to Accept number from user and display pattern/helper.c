//////////////////////////////////////////////////////////////////////////
//
//  Function name :     pattern
//  Input :             Integer
//  Output :            Void(Nothing)
//  Description :       It used to print Pattern
//  Author :            Tanmay
//  Date :              22/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"

void pattern(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#\t%d\t*\t",iCnt);
	}
}