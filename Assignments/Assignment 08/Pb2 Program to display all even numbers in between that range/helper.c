//////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeDisplayEven
//  Input :             Integer,Integer
//  Output :            void(nothing)
//  Description :       It used to print Range between
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
void RangeDisplayEven(int iStart,int iEnd)
{
	
	if(iStart>iEnd)
	{
		printf("You enter wrong input,%d is grater than %d",iStart,iEnd);
		return;
	}

	for(iStart;iStart<=iEnd;iStart++)
	{
		if(iStart%2==0)
		{
			printf("%d\t",iStart);
		}
	}
}