//Accept two numbers from user and display first number in second number of time
#include "Header.h"
int main()
{
	int iValue=0,iCnt=0;
	printf("Enter number\t");
	scanf("%d",&iValue);
	printf("\nEnter Frequency\t");
	scanf("%d",&iCnt);
	Display(iValue,iCnt);
	return 0;
}