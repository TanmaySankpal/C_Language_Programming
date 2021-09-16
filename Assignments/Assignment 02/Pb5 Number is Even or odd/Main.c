//Accept one number from user and check whether number is Even or odd 
#include "Header.h"
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\t");
	scanf("%d",&iValue);
	
	bRet=CheckEven(iValue);
	
	if(bRet==TRUE)
	{
		printf("\n%d is Even",iValue);
	}
	else
	{
		printf("\n%d is Odd",iValue);
	}
	
	return 0;
}
