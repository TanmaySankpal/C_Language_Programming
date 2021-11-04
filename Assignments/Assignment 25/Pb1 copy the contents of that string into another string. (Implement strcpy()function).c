////////////////////////////////////////////////////////////////////////////////////
//
//	1.Write a program which accept string from user and 
//	copy the contents of that string into another string. 
//	(Implement strcpy()function)
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void StrCpyX(char *str,char *dest)
{
	if(str==NULL||dest==NULL)
	  {
		  return;
	  }
	
	
	while(*str!='\0')
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	
	StrCpyX(arr,brr);
	
	printf("%s",brr);
	return 0;
} 