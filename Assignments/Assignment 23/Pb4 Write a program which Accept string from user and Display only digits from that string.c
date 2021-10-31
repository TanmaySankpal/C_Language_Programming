/////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  Display only digits from that string
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(char *str)
{	  
	  while(*str!='\0')
	  {
		  if(*str>='0'&&*str<='9')
		  {
			  printf("%c",*str);
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
	Display(Arr);
	return 0;
}