#include<stdio.h>
#include <stdlib.h>
#include<conio.h> 
// Function 1: Display a screen to prompt users to input a natural number.
int  function_1(int &n){
    do
    {   
        if (n<0)
        {
            printf("\nEnter errol,please enter natural number\n");
        }
        printf("Enter a number of element n = ");
        scanf("%d",&n);
    } while (n<0);
    return n;
}

//Function 2: Calculate sum of digits in the decimal number
int  function_2 (int n)
{   
	int last,sum=0;
   	while (n!=0)
   	{	
   		last=n%10;
       	n=n/10;
       	sum=sum+last;
   	}
	return sum; 
}
//Function 3: Output sum of digits in the inputted decimal number.
void function_3(int n){
	char key;
	printf("Sum digit = %d",function_2(n));
	while(true)
	{
		printf("\nPress any key to continue\n");
			key = getch();
			if(key == 27)
			{
        		break;
    		}
    	function_1(n);
		printf("Sum digit = %d",function_2(n));		
	}	
}
int main()
{ 	
	int n;	
	function_1(n);
	function_2(n);
	function_3(n);
	printf("\n");

  	return(0);
    
}



