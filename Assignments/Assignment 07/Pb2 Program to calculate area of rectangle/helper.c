//////////////////////////////////////////////////////////////////////////
//
//  Function name :     RectArea
//  Input :             Float,Float
//  Output :            Double
//  Description :       It used to calculate area of rectangle
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
double RectArea(float Width,float Height)
{
	double Area=0.0;
	if(Width<0)
	{
		Width=-Width;
	}
	if(Height<0)
	{
		Height=-Height;
	}
	Area=(Width*Height);
	return Area;
}