////////////////////////////////////////////////////////////////////////////////////
//
//	2.Write a program which accept string from user and 
//	copy the contents of that string into another string. 
//	(Implement strcpy()function)
//
//	INPUT :“Marvellous Multi OS”
//			10
//  Output: Marvellous
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void StrCpyX(char *str,char *dest,int iCnt)
{
	if(str==NULL||dest==NULL)
	  {
		  return;
	  }
	while((*str!='\0')&&(iCnt!=0))
	{
		*dest = *str;
		 str++;
		 dest++;
		 iCnt--;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	int iValue=0;
	
	printf("Enter range to display string\n");
	scanf("%d",&iValue);
	
	StrCpyX(arr,brr,iValue);
	
	printf("%s",brr);
	return 0;
}