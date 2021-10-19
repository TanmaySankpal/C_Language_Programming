/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and accept another number as NO,
//	return index of Last occarance of that NO
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int LastOccarance(int Arr[],int iSize,int iNo)
{
	int i=0,index=-1;
	for(i=0;i<iSize;i++)
	{
			if(Arr[i]==iNo)
			{
				index=i;
			}
	}
	return index;
}


int main()
{
	int iSize=0,iCnt=0,iValue=0,iRet=0;
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
	
	printf("Enter number to search..\n");
	scanf("%d",&iValue);
	
	iRet=LastOccarance(p,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("%d is not there",iValue);
	}
	else
	{
		printf("Last occarance of %d at %d index",iValue,iRet);
	}
	
	free(p);
	return 0;
}