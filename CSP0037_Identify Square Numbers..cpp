#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void users_to_input (long long int &n){
    printf("Enter a positive natural number n = ");
    do
    {	 fflush(stdin);
    	scanf("%lld",&n);
    } while (n<0); 
}   

long long int check_square_of_number(long long int n){
	long long int sqr = sqrt(n);
    if(sqr*sqr == n){
        return sqr;
    }
	else{
       	return -1; 
    }
}

void output(long long int n)
{	
	long long int x;
   	x=check_square_of_number(n);
    if (x==-1)
    {
    	printf("%lld is not a square number ",n);
    }
    else
    {
        printf(" %lld is a square number %lld = %lld x %lld ",n,n,x,x);
    }
}

int main()
{
    long long int n;
    char c;
    while(1){
    users_to_input(n);
  	check_square_of_number(n);
  	output(n);
	printf("\nDo you want to continue (Y/N): ");
    fflush(stdin);
	//fpurge(stdin);
    c = getchar();
    if (c == 'N' || c == 'n') {
        break;
    	}
	}
}

