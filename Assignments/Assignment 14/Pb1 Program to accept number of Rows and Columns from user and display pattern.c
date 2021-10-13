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
		for(j=1;j<=i;j++)
		{
			
				printf("*\t");
			
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