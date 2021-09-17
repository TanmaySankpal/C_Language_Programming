////////////////////////////////////////////////////////////////////////////////
//
//		Function name:   DisplayConvert
//		Input:			 char
//      Output:          void(nothig)
//      Description: 	It used to Print Even Factors of that Number 
//      Author:			Tanmay
//		Date:			13/09/2021
//////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
void DisplayConvert(char cValue)
{
		if(cValue>='A'&&cValue<='Z')
		{
			printf("%c",cValue+32);
		}
		else if(cValue>='a'&&cValue<='z')
		{
			printf("%c",cValue-32);
		}
		else
		{
			printf("%c is not charactor",cValue);
		}
}