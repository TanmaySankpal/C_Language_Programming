/////////////////////////////////////////////////////////////////
//
//	Accept n numbers from user and display
//	Such elements which are multiples of 11
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%11)==0)
		{
			printf("%d\t",Arr[iCnt]);
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
	
	printf("elements which are multiples of 11 : ");
	Display(p,iSize);
	free(p);
	return 0;
}