////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   DisplayFactor
//		Input:			 int
//      Output:          void(nothig)
//      Description: 	It used to Print Factors in reverse order of that Number 
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
	for(iCnt=iNo-1;iCnt>0;iCnt--)
	{
		if(iNo%iCnt==0)
		{
			printf("%d\t",iCnt);
		}
	}
}