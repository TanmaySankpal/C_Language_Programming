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
//		Rows=4  column=4
//		A	A	A	A
//		B	B 	B	B
//		C	C 	C 	C
//		D	D 	D 	D
//
/////////////////////////////////////////////////////////////////////////

#include"Headder.h"
void Pattern(int iRow,int iCol)
{
	int iCnt=0,i=0;
	char ch='\0';
	for(iCnt=1,ch='A';iCnt<=iRow;iCnt++,ch++)
	{
		
		for(i=1;i<=iCol;i++)
		{
				printf("%c\t",ch);
		}
		printf("\n");
	}
}
