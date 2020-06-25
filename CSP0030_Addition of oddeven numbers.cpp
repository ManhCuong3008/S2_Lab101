#include<stdio.h>
#include <stdlib.h>

//Function 1: Display screen that prompts users to enter the number of natural numbers.
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
// Function 2: Prompt users to input natural numbers.
void function_2(int a[], int n){
    printf("Input element ");
    for(int i = 0;i < n; ++i){
        do
        {   
            if (a[i]<0)
            {
            	printf("Enter errol,please enter natural number\n");
            }
            printf("Element[%d] = ", i);
            scanf("%d", &a[i]);
        } while (a[i]<0);
        
    }
}
//Function 3: Sum of odd numbers.
int function_3(int a[],int n){
    int sum=0;
    for ( int i = 1; i <= n; i++)
    {
        if (a[i]%2==1)
        {
            sum=sum+a[i];
        }
    }
    return sum;   
} 
//Function 4: Sum of even numbers.
int function_4(int a[],int n){
    int sum=0;
    for ( int i = 1; i <= n; i++)
    {
        if (a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    return sum;  
} 
//Function 5: Output sum of odd and even numbers to the screen.
void function_5 (int a[],int n){
    printf("Sum of Even = %d\n",function_4(a,n));
    printf("Sum of Odd = %d",function_3(a,n));
}

int main()
{   
    int a[10],n;
    
	function_1(n);
    function_2(a,n);
    function_3(a,n);
    function_4(a,n);
    function_5(a,n);
  	
	return(0);
}


