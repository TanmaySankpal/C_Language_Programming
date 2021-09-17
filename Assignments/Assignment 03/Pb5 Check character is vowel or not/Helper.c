////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   ChkVowel
//		Input:			 char
//      Output:          BOOL(int)
//      Description: 	It used to Check Vowel or not
//      Author:			Tanmay
//		Date:			13/09/2021
//////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
BOOL ChkVowel(char ch)
{
   if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
   {
      return TRUE;
   }  
   else
   {
     return FALSE;
   }
}