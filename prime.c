/*
Name : Kabir D Shrestha
Lab No. : 11
Program : Write a C program to check,entered number is prime number or 
		  not.
Date : 2016-11-03
*/		  

#include<stdio.h>
	int main(){
	int a,i,count=0;
	
	printf("\nEnter any number :");
	scanf("%d",&a);
	
	 for(i=2;i<=a;i++)
	 {
		 if(a%i==0)
		 {
			count++;}
	}
	if(count>2)
	printf("\n%d is not a prime number",a);
	else
	
	printf("\n%d is a prime number",a);
	
	return 0;
  }		
     
