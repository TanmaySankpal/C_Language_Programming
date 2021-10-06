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
//		A	B	C	D
//		a	b	c	d
//		A	B	C	D
//		a	b	c	d
//
/////////////////////////////////////////////////////////////////////////

#include"Headder.h"
void Pattern(int iRow,int iCol)
{
	int iCnt=0,i=0;
	char ch='\0';
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		if(iCnt%2==0)
			{
				ch='a';
			}
			else
			{
				ch='A';
			}
		for(i=1;i<=iCol;i++,ch++)
		{
				printf("%c\t",ch);
		}
		printf("\n");
	}
}
