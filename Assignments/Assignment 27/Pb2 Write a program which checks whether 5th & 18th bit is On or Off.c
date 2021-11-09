////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which checks whether 5th & 18th bit is On or Off
//	
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask=0x00020010;
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
		printf("5th & 18th Bit is on..");
	}
	else
	{
		printf("5th & 18th Bit is off..");
	}
	
	return 0;
}