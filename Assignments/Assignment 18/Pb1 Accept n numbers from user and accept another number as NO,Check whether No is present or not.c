/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and accept another number as NO,
//	Check whether No is present or not
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[],int iSize,int iNo)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
			if(Arr[i]==iNo)
			{
				break;
			}
	}
	if(i==iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *p=NULL;
	bool bRet=false;
	
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
	
	printf("Enter number to search..\n");
	scanf("%d",&iValue);
	
	bRet=CheckNumber(p,iSize,iValue);
	
	if(bRet==true)
	{
		printf("%d is there..",iValue);
	}
	else
	{
		printf("%d is not there..",iValue);
	}
	
	free(p);
	return 0;
}