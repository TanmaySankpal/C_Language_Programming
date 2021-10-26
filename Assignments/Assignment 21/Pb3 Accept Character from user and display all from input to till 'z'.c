/////////////////////////////////////////////////////////////////
//
//	Accept Character from user and 
//  if character is small display all from input to till 'z' and
//	if character is Capital display all from input to till 'Z' and
//  in other case return dirctly
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(char ch)
 {
	if(ch>='a'&&ch<='z')
	{
		for(;ch<='z';ch++)
		{
			printf("%c\t",ch);
		}
	}
	else if(ch>='A'&&ch<='Z')
	 {
		 for(;ch<='Z';ch++)
		{
			printf("%c\t",ch);
		}
	 }
	 
 }
int main()
{
	char ch='\0';
	printf("Enter Character..\n");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}