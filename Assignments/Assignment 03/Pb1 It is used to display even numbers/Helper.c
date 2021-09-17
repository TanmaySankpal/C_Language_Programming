////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   PrintEven
//		Input:			 int
//      Output:          void(nothig)
//      Description: 	It used to Print Even Number 
//      Author:			Tanmay
//		Date:			13/09/2021
//////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
void PrintEven(int iNo)
{
	int iCnt=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iCnt=iCnt+2;
		printf("%d\t",iCnt);
		iNo--;
	}
}