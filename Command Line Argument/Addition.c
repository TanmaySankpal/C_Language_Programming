 #include<stdio.h>
 #include<stdlib.h>
 
 int main(int argc,char *argv[])
 {
	 int no1=0,no2=0,ans=0;
	 printf("Toatal number of command line arguments are:%d\n",argc);
	 
	 if(argc==3)
	 {
		 no1=atoi(argv[1]);    //atoi-->Ascii to Integer
		 no2=atoi(argv[2]);
		 ans=no1+no2;
		 
		 printf("addition : %d",ans);
	 }
	 
	 return 0;
 }
 //atoi-->Ascii to Integer
 //argc for arguments count
 
 //argv for name of array (array of character Pointr)  
 
 //Compile-->gcc hello.c -o Myexe
 //Run-->Myexe 11 21
 
 //Output->Toatal number of command line arguments are:3
 //       addition:32
 

 