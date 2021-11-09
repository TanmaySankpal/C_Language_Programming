////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which checks whether 
//  7th Bit & 15th Bit & 21st bit & 28th Bit is On or Off
//	
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask=0x08104040;
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
		printf("7th Bit & 15th Bit & 21st bit & 28th Bit is on..");
	}
	else
	{
		printf("7th Bit & 15th Bit & 21st bit & 28th Bit is off..");
	}
	
	return 0;
}