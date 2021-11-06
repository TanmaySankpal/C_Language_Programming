////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which 2 strings from user and 
//	concat second string after first string. (Implement strcat() function).
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void StrCpySmall(char *str,char *dest)
{
	if(str==NULL||dest==NULL)
	  {
		  return;
	  }
	
	while(*str!='\0')
	{
		str++;
	}
	
	*str=' ';
	str++;
	
	while(*dest!='\0')
	{
		*str=*dest;
		str++;
		dest++;
	}
	
	*str='\0';
}

int main()
{
	char arr[50]="Marvellous Infosystems";
	char brr[30]="Logic building";
	
	StrCpySmall(arr,brr);
	
	printf("%s",arr);
	return 0;
} 