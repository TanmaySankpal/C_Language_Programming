//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and accept one character
//  Return frequency of that character.
//
//////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int ChkVowel(char *str,char ch)
{
	int Freq=0;
	  if(str==NULL)
	  {
		  return 0;
	  }
	  while(*str!='\0')
	  {
		  if(*str==ch)
		  {
			  Freq++;
			  
		  }
		  
		  str++;
	  }
	  return Freq;
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

	printf("Thair is frequency of %c %d in string",ch,iRet);
		
	return 0;
}