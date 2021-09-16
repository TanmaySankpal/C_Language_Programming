////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   Check
//		Input:			 int
//      Output:          int
//      Description: 	It used to check number is divisible by 5 or not
//      Author:			Tanmay
//		Date:			06/09/2021
/////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
BOOL Check(BOOL iNo)
{
	if((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}