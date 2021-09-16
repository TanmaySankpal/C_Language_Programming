#include "Header.h"
void Display(int iNo,int iFrequency)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iFrequency<0)
	{
		iFrequency=-iFrequency;
	}
	for(iCnt=1;iCnt<=iFrequency;iCnt++)
	{
		printf("%d\t",iNo);
	}
}