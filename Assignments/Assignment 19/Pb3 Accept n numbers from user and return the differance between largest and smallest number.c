/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and 
//  return the differance between largest and smallest number
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Differance(int Arr[],int iLength)
{
	int iCnt=0,iMaximum=Arr[0],iMinimum=Arr[0];
	
	for(iCnt=1;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMaximum)
		{
			iMaximum=Arr[iCnt];
		}
		else if(Arr[iCnt]<iMinimum)
		{
			iMinimum=Arr[iCnt];
		}
	}
	return (iMaximum-iMinimum);
	
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
	
	iRet=Differance(p,iSize);
	
	printf("Differance between Maximum and Minimun from all elements is %d",iRet);
	free(p);
	return 0;
}