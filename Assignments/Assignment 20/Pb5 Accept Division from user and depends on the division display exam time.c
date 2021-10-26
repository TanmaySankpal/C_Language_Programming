/////////////////////////////////////////////////////////////////
//
//	Accept Division from user and 
//	depends on the division display exam time
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

 void Display(char ch)
 {
	 if(ch=='A'||ch=='a')
	 {
		 printf("Your Exam at 7 AM");
	 }
	 else if(ch=='B'||ch=='b')
	 {
		 printf("Your Exam at 8:30 AM");
	 }
	 else if(ch=='C'||ch=='c')
	 {
		 printf("Your Exam at 9:20 AM");
	 }
	 else if(ch=='D'||ch=='d')
	 {
		 printf("Your Exam at 10:30 AM");
	 }
	 else 
	 {
		 printf("Your Enter wrong Division");
	 }
	 
 }
int main()
{
	char cValue='\0';
	
	printf("Enter Your Division :");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}