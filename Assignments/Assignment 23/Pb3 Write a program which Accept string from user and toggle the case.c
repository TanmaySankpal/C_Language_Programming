/////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  toggle the case
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

void strtogglex(char *str)
{
	  while(*str!='\0')
	  {
		  if(*str>='a'&&*str<='z')
		  {
			  *str=*str-32;
		  }
		  else if(*str>='A'&&*str<='Z')
		  {
			  *str=*str+32;
		  }
		  str++;
	  }
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter String..\n");
	scanf("%[^'\n']s",&Arr);
	strtogglex(Arr);
	printf("Modified String is : %s",Arr);
	return 0;
}