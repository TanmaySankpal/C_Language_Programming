//////////////////////////////////////////////////////////////////////////
//
//  Function name :     KMtoMeter
//  Input :             Int
//  Output :            Int
//  Description :       It used to convert kilometre into meter
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
int KMtoMeter(int KM)
{
	int Meter;
	if(KM<0)
	{
		KM=-KM;
	}
	
	Meter=(KM*1000);
	return Meter;
}