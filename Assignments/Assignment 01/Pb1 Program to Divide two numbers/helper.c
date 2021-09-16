//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Divide
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to Divide 2 numbers
//  Author :            Tanmay
//  Date :              05/09/2021
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO1
        Accept second number as NO2
        Perform addition of NO1  & NO2
        Store the result in RET
        Return the value of RET
    STOP
*/


#include "header.h"

int Divide(int iNo1,int iNo2)
{
	int iAns=0;
	if(iNo2>iNo1)
	{
		return -1;
	}
	iAns=iNo2/iNo1;
	return iAns;
}