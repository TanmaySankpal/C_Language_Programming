/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept area in square feet and convert it into square meter. 
//  (1 square feet = 0.0929 Square meter)
//	Input : 5
// 	Output :0.464515
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int main()
{
	int iValue=0;
	double dRet=0.0;
	
	printf("Enter area in square feet : ");
	scanf("%d",&iValue);
	
	dRet=SquareMeter(iValue);
	printf("%d sq ft = %lf sq meter",iValue,dRet);
	
	return 0;
}