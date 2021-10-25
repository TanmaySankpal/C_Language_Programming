/////////////////////////////////////////////////////////////////
//
//	Accept Character from user and 
//  Chaeck whether it is Capital alphabet or not
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

 bool ChkAlpha(char ch)
 {
	 bool bRet=false;
	 if(ch<='Z'&&ch>='A')
	 {
		 bRet= true;
	 }
	 return bRet;
 }
int main()
{
	char cValue='\0';
	bool bRet=false;
	
	printf("Enter the charcter :");
	scanf("%c",&cValue);
	
	bRet=ChkAlpha(cValue);
	
	if(bRet==true)
	{
		printf("%c is Capital Alphabate Character..",cValue);
	}
	else
	{
		printf("%c is not Capital Alphabate Character..",cValue);
	}
	return 0;
}