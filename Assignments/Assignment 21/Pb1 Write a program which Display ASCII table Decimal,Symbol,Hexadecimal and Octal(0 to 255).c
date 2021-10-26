/////////////////////////////////////////////////////////////////
//
//	Write a program which Display ASCII table
//  Decimal,Symbol,Hexadecimal and Octal(0 to 255)
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

void Display()
 {
	 int i=0;
	 printf("Decimal Symbol Hexadecimal Octal\n");
	 for(i=0;i<=255;i++)
	 {
		 printf("%d\t%c\t%x\t%o\n",i,i,i,i);
	 }
	 
 }
int main()
{
	Display();
	return 0;
}