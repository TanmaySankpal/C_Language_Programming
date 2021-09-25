//////////////////////////////////////////////////////////////////////////
//
//  Function name :     FhtoCs
//  Input :             Float
//  Output :            Double
//  Description :       It used to convert Fahrenheit to celsius
//  Author :            Tanmay
//  Date :              20/09/2021
//
//////////////////////////////////////////////////////////////////////////

#include "header.h"
double FhtoCs(float Fahrenheit)
{
	double celsius=0.0;
	
//celsius=(Fahrenheit-32)*(5/9);
	//printf("%lf=%f",celsius,Fahrenheit);
	return (Fahrenheit-32)*(5/9);
}