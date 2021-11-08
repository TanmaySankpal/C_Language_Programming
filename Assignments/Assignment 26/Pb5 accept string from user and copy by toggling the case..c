////////////////////////////////////////////////////////////////////////////////////
//
//	Write a program which 2 strings from user and 
//	copy all characters of that string into another string by toggling the case.
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void StrCpyToggal(char *str,char *dest)
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
		else if(*str>='a'&&*str<='z')
		{
			*dest=*str-32;
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
	
	StrCpyToggal(arr,brr);
	printf("%s\n",arr);
	printf("%s",brr);
	return 0;
} 