//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Pattern
//  Input :             Integer, Integer
//  Output :            Void(Nothing)
//  Description :       It used to Print Pattern
//  Author :            Tanmay
//  Date :              27/09/2021
//
//////////////////////////////////////////////////////////////////////////
//
//		Rows=3  column=4
//		1	2	3	4
//		5	6	7	8
//		9	10	11	12
//
/////////////////////////////////////////////////////////////////////////

#include"Headder.h"
void Pattern(int iRow,int iCol)
{
	int iCnt=0,i=0,j=1;
	
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		
		for(i=1;i<=iCol;i++,j++)
		{
				printf("%d\t",j);
		}
		printf("\n");
	}
}
