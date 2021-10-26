/////////////////////////////////////////////////////////////////
//
//	Accept Character from user and 
//  if character is small display its corrsponding Capital and
//	if character is Capital display its corrsponding Small 
//  in other case display as it is
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(char ch)
 {
	 if(ch>='A'&&ch<='Z')
	 {
		 ch=ch+32;
	 }
	 else if(ch>='a'&&ch<='z')
	 {
		 ch=ch-32;
	 }
	 printf("%c",ch);
	 
	 
 }
int main()
{
	char ch='\0';
	printf("Enter Character..\n");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}