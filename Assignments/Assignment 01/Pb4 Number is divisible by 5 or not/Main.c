//Accept one number and check whether is divisible by 5 or not
#include "Header.h"
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\t");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	
	if(bRet==TRUE)
	{
		printf("\nDivisible by 5");
	}
	else
	{
		printf("\nNot Divisible by 5");
	}
	
	return 0;
}
