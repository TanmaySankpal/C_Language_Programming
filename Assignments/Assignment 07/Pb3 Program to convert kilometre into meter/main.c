/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept distance in kilometre and convert it into meter. 
//  (1 kilometre = 1000 Meter)
//	Input : 5
// 	Output :5000
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter distance : ");
	scanf("%d",&iValue);
	
	iRet=KMtoMeter(iValue);
	printf("%d KM = %d Meter",iValue,iRet);
	
	return 0;
}