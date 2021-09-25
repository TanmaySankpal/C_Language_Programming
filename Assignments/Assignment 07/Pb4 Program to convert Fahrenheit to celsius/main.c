/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept temperature in Fahrenheit and convert it into celsius. 
//	(1 celsius = (Fahrenheit -32) * (5/9))
//	Input : 10
// 	Output :-12.2222       (10 - 32) * (5/9)
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int main()
{
	float fValue=0.0;
	double dRet=0.0;
	
	printf("Enter temp in Fahrenheint : ");
	scanf("%f",&fValue);
	
	dRet=FhtoCs(fValue);
	printf("%f Fh= %lf Cs",fValue,dRet);
	
	return 0;
}