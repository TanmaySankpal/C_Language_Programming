/////////////////////////////////////////////////////////////////
//
//	Accept Character from user and 
//  Chaeck whether it is Digit or not
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

 bool ChkAlpha(char ch)
 {
	 bool bRet=false;
	 if(ch>='1'&&ch<='9')
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
		printf("%c is Digit..",cValue);
	}
	else
	{
		printf("%c is not Digit..",cValue);
	}
	return 0;
}