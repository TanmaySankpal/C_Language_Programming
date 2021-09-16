////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   CheckEven
//		Input:			 int
//      Output:          int
//      Description: 	It used to check number is Even or odd
//      Author:			Tanmay
//		Date:			07/09/2021
/////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
BOOL CheckEven(BOOL iNo)
{
	if((iNo%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}