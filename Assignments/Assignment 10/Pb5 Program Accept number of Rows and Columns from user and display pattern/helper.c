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
//		1	1	1	1
//		2	2	2	2
//		3	3	3	3
//		4	4	4	4
//
/////////////////////////////////////////////////////////////////////////

#include"Headder.h"
void Pattern(int iRow,int iCol)
{
	int iCnt=0,i=0;
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(i=1;i<=iCol;i++)
		{
			printf("%d\t",iCnt);
			
		}
		printf("\n");
	}
}
