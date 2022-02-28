 #include<stdio.h>
 #include<stdlib.h>
 
 int main(int argc,char *argv[])
 {
	 int i=0;
	 printf("Toatal number of command line arguments are:%d\n",argc);
	 for(i=0;i<argc;i++)
	 {
		 printf("%s\n",argv[i]);
	 }
	 return 0;
 }
 

 //argc for arguments count
 //argv for name of array (array of character Pointr)  
 
 //Compile-->gcc hello.c -o Myexe
 //Run-->Myexe Demo 11 Tanmay 21
 
 //Output->Toatal number of command line arguments are:5
 //			Myexe
//			Demo
//			11
//			Tanmay
//			21
