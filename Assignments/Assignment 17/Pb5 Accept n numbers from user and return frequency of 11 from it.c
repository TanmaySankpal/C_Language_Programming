/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and return 
//			frequency of 11 from it
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0,FreqCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			FreqCnt++;
		}
	}
	return FreqCnt;
	
}
int main()
{
	int iSize=0,iRet=0,iCnt=0,iValue=0;
	int *p=NULL;
	
	printf("Enter Number of elements\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize *sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory..");
		return -1;
	}
	
	printf("Entr %d elements\n",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter element to search..\n");
	scanf("%d",&iValue);
	
	iRet=Frequency(p,iSize,iValue);
	
	printf("Freqvency of %d is %d",iValue,iRet);
	free(p);
	return 0;
}