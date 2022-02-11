//Swaping
#include<stdio.h>

 int main()
 {
	int First=0,Second=0;
    printf("\n==============================================================================\n");
	
	printf("Enter Two Numbers\n");
	scanf("%d%d",&First,&Second);
	
	Second+=First;
	First=Second-First;
	Second-=First;
	
	printf("Swaped Numbers:%d %d\n",First,Second);
    

 return 0;
}
