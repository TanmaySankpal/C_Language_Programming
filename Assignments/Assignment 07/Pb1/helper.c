//////////////////////////////////////////////////////////////////////////
//
//  Function name :     CircleArea
//  Input :             Float
//  Output :            Double
//  Description :       It used to calculate area of circle
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
double CircleArea(float fRadius)
{
	double Area=0.0;
	float PI=3.14;
	Area=((PI*fRadius*fRadius));
	return Area;
}