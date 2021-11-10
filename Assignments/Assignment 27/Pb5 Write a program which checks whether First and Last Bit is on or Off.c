////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which checks whether First and Last Bit is on or Off
//  1st & 32nd Bit is on or Off
//	
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask=0x80000001;
	UINT iRsult=0;
	
	iRsult=iNo&iMask;
	if(iRsult==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}


int main()
{
	UINT iValue=0;
	bool bRet=false;
	
	printf("Enter number..");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	if(bRet==true)
	{
		printf("First and Last Bit is on..");
	}
	else
	{
		printf("First and Last Bit is off..");
	}
	
	return 0;
}