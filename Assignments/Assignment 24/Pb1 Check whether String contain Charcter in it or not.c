//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and accept one character
//  check whether String contain Charcter in it or not
//
//////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
	bool bRet=false;
	
	  if(str==NULL)
	  {
		  return 0;
	  }
	  while(*str!='\0')
	  {
		  if(*str==ch)
		  {
			  bRet=true;
			  break;
		  }
		  
		  str++;
	  }
	  return bRet;
}

int main()
{
	char Arr[20];
	bool bRet=false;
	char ch='\0';
	
	printf("Enter String..\n");
	scanf("%[^'\n']s",&Arr);
	
	//fflush(stdin);
	
	printf("Enter Character to search\n");
	scanf(" %c",&ch);
	
	bRet=ChkChar(Arr,ch);

		if(bRet==true)
		{
			printf("Contain %c in string..");
		}
		else
		{
			printf("Thair is no %c in string");
		}
	return 0;
}