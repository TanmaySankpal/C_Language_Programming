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
//		Rows=4  column=5
//		4	4	4	4	4
//		3	3	3	3	3
//		2	2	2	2	2
//		1	1	1	1	1
//		
/////////////////////////////////////////////////////////////////////////

#include"Headder.h"
void Pattern(int iRow,int iCol)
{
	int iCnt=0,i=0,j=0;
	
	for(j=iRow;iCnt<iRow;iCnt++,j--)
	{
		
		for(i=1;i<=iCol;i++)
		{
				printf("%d\t",j);
		}
		printf("\n");
	}
}
