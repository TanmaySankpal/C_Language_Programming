//////////////////////////////////////////////////////////////////////////
//
//  Function name :     SquareMeter
//  Input :             Int
//  Output :            Int
//  Description :       It used to convert kilometre into meter
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
double SquareMeter(int iValue)
{
	double Meter=0.0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	Meter=(iValue*0.0929);
	return Meter;
}