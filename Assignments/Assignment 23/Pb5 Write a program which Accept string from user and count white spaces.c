/////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  count white spaces
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

int CountWhite(char *str)
{
	int iCnt=0;
	  while(*str!='\0')
	  {
		  if(*str==' ')
		  {
			  iCnt++;
		  }
		  str++;
	  }
	  return iCnt;
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter String..\n");
	scanf("%[^'\n']s",&Arr);
	iRet=CountWhite(Arr);
	printf("White Spaces are : %d",iRet);
	return 0;
}