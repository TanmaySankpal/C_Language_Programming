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
//		Rows=5  column=3
//		5	4	3	2	1
//		5	4	3	2	1
//		5	4	3	2	1
//
/////////////////////////////////////////////////////////////////////////

#include"Headder.h"
void Pattern(int iRow,int iCol)
{
	int iCnt=0,i=0;
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(i=iCol;i!=0;i--)
		{
			printf("%d\t",i);
			
		}
		printf("\n");
	}
}
