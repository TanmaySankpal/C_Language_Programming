//////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeDisplay
//  Input :             Integer,Integer
//  Output :            void(nothing)
//  Description :       It used to print Range between
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
void RangeDisplay(int iStart,int iEnd)
{
	if(iStart>iEnd)
	{
		printf("You enter wrong input,%d is grater than %d",iStart,iEnd);
		return;
	}

	for(iStart;iStart<=iEnd;iStart++)
	{
		printf("%d\t",iStart);
	}
}