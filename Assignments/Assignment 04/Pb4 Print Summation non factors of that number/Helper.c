////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   SumNonFact
//		Input:			 int
//      Output:          int
//      Description: 	It used to Print Sum of Non Factors of that Number 
//      Author:			Tanmay
//		Date:			13/09/2021
//////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
int SumNonFact(int iNo)
{
	int iCnt=0,Sum=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			Sum=Sum+iCnt;
		}
	}
	return Sum;
}