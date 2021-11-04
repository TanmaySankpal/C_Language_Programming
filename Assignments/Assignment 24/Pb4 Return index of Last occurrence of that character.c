//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and accept one character
//  Return index of Last occurrence of that character
//
//////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int ChkVowel(char *str,char ch)
{
	int index=0,temp=0;
	  if(str==NULL)
	  {
		  return 0;
	  }
	  while(*str!='\0')
	  {
		  if(*str==ch)
		  {
			  temp=index;
			  
		  }
		  index++;
		  str++;
	  }
	  
	  return temp;
}

int main()
{
	char Arr[20];
	int iRet=0;
	char ch='\0';
	
	printf("Enter String..\n");
	scanf("%[^'\n']s",&Arr);
	
	printf("Enter Charcter to search\n");
	scanf(" %c",&ch);
	
	iRet=ChkVowel(Arr,ch);

	printf("The index of Last occurrence %c is %d in string",ch,iRet);
		
	return 0;
}