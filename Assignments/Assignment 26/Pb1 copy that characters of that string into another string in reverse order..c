////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which accept string from user and 
//	copy that characters of that string into another string in reverse order.
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void StrCpyX(char *str,char *dest)
{
	int iCnt=0;
	if(str==NULL||dest==NULL)
	  {
		  return;
	  }
	
	
	while(*str!='\0')
	{
		str++;
		iCnt++;
	}
	str--;
	while(iCnt>0)
	{
		*dest=*str;
		str--;
		iCnt--;
		dest++;
	}
	
	
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	
	StrCpyX(arr,brr);
	printf("%s\n",arr);
	printf("%s",brr);
	return 0;
} 