//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which Accept string from user and
//  display it inn reverse order
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Reverse(char *Str)
{
	  int iCnt=0,i=0;
	  char ch='\0';
	  char *End=Str;
	  
	  while(*End!='\0')
	  {
		  iCnt++;
		  End++;
	  }
	  End--;

	  while(Str<End)
	  {
		  ch=*Str;
		  *Str=*End;
		  *End=ch;
		  Str++;
		  End--;
	  }
	
}
int main()
{
	char Arr[20];
	
	printf("Enter String..\n");
	scanf("%[^'\n']s",&Arr);
	
	Reverse(Arr);
	printf("Reverse String is : %s",Arr);
	return 0;
}