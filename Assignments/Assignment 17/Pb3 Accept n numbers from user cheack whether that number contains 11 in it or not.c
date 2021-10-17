/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user cheack whether
//  that number contains 11 in it or not
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
	int i=0;
	bool bRet=FALSE;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			bRet=TRUE;
			break;
		}
	}
	return bRet;
}



int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;
	bool bRet=FALSE;
	
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
	
	bRet=Check(p,iSize);
	
	if(bRet==TRUE)
	{
		printf("Number is there..");
	}
	else
	{
		printf("Number is not there..");
	}
	free(p);
	return 0;
}