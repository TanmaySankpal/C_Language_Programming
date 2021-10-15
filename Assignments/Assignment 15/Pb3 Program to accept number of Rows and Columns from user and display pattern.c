/////////////////////////////////////////////////////////////////
//
//	Accept number of Rows and Columns from user and display pattern
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=1,j=1;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if (i==1||j==1||i==iRow||j==iCol||(i+j)==(iCol+1))
			{
				printf("*\t");
			}
			else 
			{
				printf("\t");
			}
			
		}
		
		printf("\n\n");
	}
}

int main()
{
	int iRow=0,iCol=0;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&iRow,&iCol);
	Pattern(iRow,iCol);
	return 0;
}