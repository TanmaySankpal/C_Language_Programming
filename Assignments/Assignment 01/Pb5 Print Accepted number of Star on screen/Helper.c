////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name: Accept
//	    Input:         int
//      Output:        void(nothing)
//		Description:   It is used to accept number and print that number of * on screen
//      Author:			Tanmay
//      Date:			06/09/2021
///////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
void Accept(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\n");
	}
}