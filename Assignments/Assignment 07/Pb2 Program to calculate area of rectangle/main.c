/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept width & height of rectangle from user and calculate its area.
//	(Area = Width * Height)
//	Input : 5.3		9.78
// 	Output :51.834
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int main()
{
	float fValue1=0.0,fValue2=0.0;
	double dRet=0.0;
	
	printf("Enter Width : ");
	scanf("%f",&fValue1);
	
	printf("Enter Hight : ");
	scanf("%f",&fValue2);
	
	dRet=RectArea(fValue1,fValue2);
	printf("Area of Ractangle : %lf ",dRet);
	return 0;
}