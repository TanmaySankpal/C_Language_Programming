/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and 
//  return the largest number
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int iCnt=0,i=0,iDigit=0,DigitSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		DigitSum=0;
		for(i=0;Arr[iCnt]!=0;i++)
		{
			iDigit=Arr[iCnt]%10;
			
			DigitSum=DigitSum+iDigit;
			
			Arr[iCnt]=Arr[iCnt]/10;
		}
		printf("\t%d",DigitSum);
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
	
	printf("Sumation of all Digits:");
	Display(p,iSize);
	
	free(p);
	return 0;
}