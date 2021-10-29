/////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  convert it lower case
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

void strlwrx(char *str)
{
	  while(*str!='\0')
	  {
		  if(*str>='A'&&*str<='Z')
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
	strlwrx(Arr);
	printf("Modified String is : %s",Arr);
	return 0;
}