 #include<stdio.h>
 
 int main()
 {
	const int i=21;
	
	//i=51	Error
	//i++	Error
	 
	 return 0;
 }
 
 /* By using data types qualifer we can Assign new quality to an existing variable 
		There are 2 types of qualifers in C and C++ as 1.Const 2.Volatile
		
		1.Const If we use Const qualifer then we cannot change value of that variable throgh out execusion of program.
		        If we try to change the value of that variable then compilor will genrate error
				
		2.A volatile keyword in C is nothing but a qualifier that is used by the programmer 
					when they declare a variable in source code. 
					It is used to inform the compiler that the variable value can be changed any time 
					without any task given by the source code. 
					Volatile is usually applied to a variable when we are declaring it.
*/
