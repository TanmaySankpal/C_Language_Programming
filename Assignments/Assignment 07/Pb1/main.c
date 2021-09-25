/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept radius of circle from user and calculate its area.
//  Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//	Input : 5.3
// 	Output : 88.2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int main()
{
	float fValue=0.0;
	double dRet=0.0;
	
	printf("Enter radius ");
	scanf("%f",&fValue);
	
	dRet=CircleArea(fValue);
	printf("Area of Circle is %f",dRet);
	return 0;
}