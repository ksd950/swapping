#include<stdio.h>  
int main()    
{    
int a=3, b=5;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=8     
b=a-b;//b=3    
a=a-b;//a=5    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
