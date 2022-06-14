#include<stdio.h>

int main()
{
    /* Flow of the c Programming
    Preprocessing-compilation-Assembly-Linking-Loading */

    /*What is a variables*/
    /*A name given to a memory location
     Declared by writitng type variable_name
     Initialized and decleared by type type variable_name = value*/

    /*Rules for Defining a variable in c*/
    /*Can contin alphabets, digits, and underscore (_)
    A variable name can starta with an alphabet and underscore only
    Can't start with digit
    No white spaces & reserved keywords are allowed
    Valid variables names: int harry, float harry123, char _harry5
    Invalid variable names: $ashok, int 5ashok, char long*/

    /*Data types in C*/
    /*Basic Data types; int,char,float,double
      Derived data types; pointer, array, structure, union
      enumeration data type; emum
      void data type; void (empty)*/

    /*Data Type  	         Memory (bytes)          Range  	    Format Specifier 
      short int 	               2          -32,768 to 32,767 	      %hd
      unsigned short int           2 	            0 to 65,535 	      %hu 
     unsigned int                  4         0 to 4,294,967,295           %u 
      int                          4 -2,147,483,648 to 2,147,483,647      %d 
      long int                     4 	-2,147,483,648 to 2,147,483,647   %ld 
      unsigned long int            4           0 to 4,294,967,295  	      %lu 
      long long int                8         	-(2^63) to (2^63)-1       %lld 
      unsigned long long int       8 	0 to 18,446,744,073,709,551,615   %llu 
      signed char                  1                 	-128 to 127       %c 
      unsigned char 	           1  	              0 to 255  	      %c 
      float  	                   4  	                         	      %f  
      double  	                   8                        	 	     %lf 
      long double      	          16                          	 	     %Lf */

      printf("%hd\n",sizeof(short int));

    /**/
    return 0;
}
