////////////////////////////////////////////////////////////////////////////////////
//
//	4.Write a program which accept string from user and 
//	copy small characters of that string into another string.
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
		if(*str>='a'&&*str<='z')
		{
			*dest=*str;
			dest++;
		}
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