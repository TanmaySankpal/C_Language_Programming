/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and 
//  return the smallest number
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
	int iCnt=0,iMinimum=Arr[0];
	
	for(iCnt=1;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iMinimum)
		{
			iMinimum=Arr[iCnt];
		}
	}
	return iMinimum;
	
}
int main()
{
	int iSize=0,iRet=0,iCnt=0;
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
	
	iRet=Minimum(p,iSize);
	
	printf("Minimum from all elements is %d",iRet);
	free(p);
	return 0;
}