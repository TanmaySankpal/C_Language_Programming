////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   DisplayFactor
//		Input:			 int
//      Output:          int
//      Description: 	It used to Print Multiplication of Factors of that Number 
//      Author:			Tanmay
//		Date:			13/09/2021
//////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
int MultFact(int iNo)
{
	int iCnt=0,Mult=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	Mult=1;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			Mult=Mult*iCnt;
		}
	}
	return Mult;
}