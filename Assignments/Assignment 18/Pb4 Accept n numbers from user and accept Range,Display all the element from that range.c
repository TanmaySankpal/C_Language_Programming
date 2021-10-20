/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and accept Range,
//	Display all the element from that range
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
			if(Arr[i]>=iStart&&Arr[i]<=iEnd)
			{
				printf("\t%d",Arr[i]);
			}
	}
}

int main()
{
	int iSize=0,iCnt=0,iValue1=0,iValue2=0;
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
	
	printf("Enter starting poient\n");
	scanf("%d",&iValue1);
	
	printf("Enter Ending poient\n");
	scanf("%d",&iValue2);
	
	printf("Number between %d to %d are : ",iValue1,iValue2);
	Range(p,iSize,iValue1,iValue2);
	
	free(p);
	return 0;
}