#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
int function1(int &s){
	
    printf("Number of element s = ");
    scanf("%d",&s);
    return s;
}

void function2(double a[], int s){
    for(int i = 0;i < s; ++i){
        printf("	Enter an integer: ",i);
        scanf("%lf", &a[i]);
    }
}

double function3(double a[],int s){
	double sum=0;
	for(int i=0;i<s;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
void function4(double a[],int s){
	
	printf("Sum = %0.lf",function3(a,s));
	
	
//		if(key==27)
//		{
//			exit(0);
//		}
	
		
}
int main ()
{   
	int  s;
	char key;
	//double a[100];
	function1(s);
   	double *a=(double *)malloc(s*sizeof(int));
	function2(a,s);
	function3(a,s);
	function4(a,s);
	do{
		
		printf("Press any key to continue!");
		fflush(stdin);
		scanf("%c",&key);
		
	
	}while(key=='y'|| key=='Y');
		function1(s);
		function2(a,s);
		function3(a,s);	
		function4(a,s);	
	free(a);
	printf("\n");
	
  	return(0);
}
