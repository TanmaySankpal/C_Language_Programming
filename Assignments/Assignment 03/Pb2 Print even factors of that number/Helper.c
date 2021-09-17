////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   DisplayFactor
//		Input:			 int
//      Output:          void(nothig)
//      Description: 	It used to Print Even Factors of that Number 
//      Author:			Tanmay
//		Date:			13/09/2021
//////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
void DisplayFactor(int iNo)
{
	int iCnt=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0&&iCnt%2==0)
		{
			printf("%d\t",iCnt);
		}
	}
}