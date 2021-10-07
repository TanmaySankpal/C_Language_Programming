/////////////////////////////////////////////////////////////////
//
//	Accept number of Rows and Columns from user and display pattern
//
///////////////////////////////////////////////////////////////


#include"Headder.h"
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}