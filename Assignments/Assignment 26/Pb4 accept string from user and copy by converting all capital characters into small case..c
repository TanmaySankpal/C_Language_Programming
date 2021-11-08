////////////////////////////////////////////////////////////////////////////////////
//
//	4.Write a program which accept string from user and 
//	copy capital characters of that string into another string.
//  by converting all capital characters into small case.
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
		if(*str>='A'&&*str<='Z')
		{
			*dest=*str+32;
		}
		else
		{
			*dest=*str;
		}
		dest++;
		str++;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	
	StrCpySmall(arr,brr);
	
	printf("%s",brr);
	return 0;
} 