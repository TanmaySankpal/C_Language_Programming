/////////////////////////////////////////////////////////////////
//
//	Accept Character from user and 
//  Chaeck whether it is alphabet or not
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

 bool ChkAlpha(char ch)
 {
	 bool bRet=false;
	 if(ch<='Z'&&ch>='A'||ch<='z'&&ch>='a')
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
		printf("It is Alphabate Character..");
	}
	else
	{
		printf("It is not Alphabate Character..");
	}
	return 0;
}