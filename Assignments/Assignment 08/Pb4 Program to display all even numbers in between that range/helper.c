//////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeDisplayEven
//  Input :             Integer,Integer
//  Output :            Integer
//  Description :       It used to print Sum Range between
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
int RangeSumEven(int iStart,int iEnd)
{
	int iSum=0;
	
	if(iStart<0||iEnd<=0)
	{
		printf("You enter negative number");
		return 0;
	}
	
	if(iStart>iEnd)
	{
		printf("You enter wrong input,%d is grater than %d",iStart,iEnd);
		return 0;
	}

	for(iStart;iStart<=iEnd;iStart++)
	{
		if(iStart%2==0)
		{
			iSum=iSum+iStart;
		}
	}
	return iSum;
}