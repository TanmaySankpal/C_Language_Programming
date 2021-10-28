/////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  count number of Small character
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

int CountSmall(char *str)
{
	  int iCnt=0;
	  if(str==NULL)
	  {
		  return 0;
	  }
	  while(*str!='\0')
	  {
		  if(*str>='a'&&*str<='z')
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
	
	iRet=CountSmall(Arr);
	printf("Count of Small letters : %d",iRet);
	return 0;
}