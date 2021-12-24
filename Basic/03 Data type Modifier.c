 #include<stdio.h>
 
 int main()
 {
	
	int i=11;		//4 Byte
	short int j=11; //2 Byte
	long int k=11;	//8 Byte
	
	int i=11;		//Usable 31
	int i=-31;		//Usable 31
	
	signed int j=11;	 //Usable 31
	unsigned int k=11;	//Usable 32
	
	printf("Size of int : %d Bytes\n",sizeof i);
	printf("Size of int : %d Bytes\n",sizeof j);
	printf("Size of int : %d Bytes\n",sizeof k);
	 
	 return 0;
 }


 /*	By using data type modifier we can modify the size of that data type or we can modify the range
	
	By using short and long data type modifier we can modify the size
	
	By using signed and unsigned we can modify the range of that data type
*/
