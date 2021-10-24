/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and 
//  return Number which contain 3 Digits
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int iCnt=0,i=0,DigitCnt=0,iTemp=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iTemp=Arr[iCnt];
		
		for(i=0;iTemp!=0;i++)
		{
			iTemp=iTemp/10;
		}
		
		if(i==3)
		{
			printf("\t%d",Arr[iCnt]);
		}
	}
}                             
int main()
{
	int iSize=0,iCnt=0;
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
	
	printf("Number which contain 3 Digits :");
	Display(p,iSize);
	
	free(p);
	return 0;
}