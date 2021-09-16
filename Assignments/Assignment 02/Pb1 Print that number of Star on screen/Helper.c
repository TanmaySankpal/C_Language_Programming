#include "Header.h"
void Display(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iCnt<iNo)
	{
		printf("*\n");
		iCnt++;
	}
}