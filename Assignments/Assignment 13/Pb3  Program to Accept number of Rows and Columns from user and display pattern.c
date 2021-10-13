/////////////////////////////////////////////////////////////////
//
//	Accept number of Rows and Columns from user and display pattern
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else
			{
				printf("*\t");
			}
			
		}
		
		printf("\n");
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