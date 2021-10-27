/////////////////////////////////////////////////////////////////
//
//	Accept Character from user and  
//	Display ASCII value Decimal,Symbol,Hexadecimal and Octal
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

 void Display(char ch)
 {
	 printf("Decimal Symbol Hexadecimal Octal\n");
	 printf("%d\t%c\t0X%X\t%o\n",ch,ch,ch,ch);
 }
int main()
{
	char ch='\0';
	printf("Enter Character..\n");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}