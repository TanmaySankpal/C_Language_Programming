//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  check whether it contain vowel in it or not
//
//////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
	bool bRet=false;
	
	  if(str==NULL)
	  {
		  return 0;
	  }
	  while(*str!='\0')
	  {
		  if(*str=='a'||*str=='A'||*str=='e'||*str=='E'||*str=='i'||*str=='I'||*str=='o'||*str=='O'||*str=='u'||*str=='U')
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
	
	printf("Enter String..\n");
	scanf("%[^'\n']s",&Arr);
	
	bRet=ChkVowel(Arr);

		if(bRet==true)
		{
			printf("Contain Vowel..");
		}
		else
		{
			printf("Thair is no Vowel..");
		}
	return 0;
}