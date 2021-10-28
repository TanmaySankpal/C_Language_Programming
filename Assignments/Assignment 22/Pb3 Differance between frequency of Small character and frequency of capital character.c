//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  return differance between frequency of Small character and frequency of capital character
//
//////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Differance(char *str)
{
	  int SmallCnt=0,CapitalCnt=0;
	  if(str==NULL)
	  {
		  return 0;
	  }
	  while(*str!='\0')
	  {
		  if(*str>='a'&&*str<='z')
		  {
			  SmallCnt++;
		  }
		  if(*str>='A'&&*str<='Z')
		  {
			  CapitalCnt++;
		  }
		  
		  str++;
	  }
	return (SmallCnt-CapitalCnt);
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter String..\n");
	scanf("%[^'\n']s",&Arr);
	
	iRet=Differance(Arr);
	printf("Differance between frequency of small characters and frequency of capital character : %d",iRet);
	return 0;
}