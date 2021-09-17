//Write a program which accept charactor from user and check whether that cxharactor is vowel or not
#include "Header.h"
int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	printf("Enter charactor\n");
	scanf("%c",&cValue);
	bRet=ChkVowel(cValue);
	
	 if (bRet ==1)
     {
        printf("It is Vowel");
     }
     else
     {
         printf("It is not Vowel");
     }
	return 0;
}