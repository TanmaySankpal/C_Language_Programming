#include "Header.h"
void Display(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>=1)
	{
		printf("*\n");
		iNo--;
	}
}