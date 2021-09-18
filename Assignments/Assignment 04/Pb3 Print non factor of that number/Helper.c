////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   NonFact
//		Input:			 int
//      Output:          void(nothig)
//      Description: 	It used to Print Non Factors 
//      Author:			Tanmay
//		Date:			13/09/2021
//////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
void NonFact(int iNo)
{
	int iCnt=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			printf("%d\t",iCnt);
		}
	}
}