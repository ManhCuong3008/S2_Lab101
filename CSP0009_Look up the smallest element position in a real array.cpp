#include<stdio.h>
#include <stdlib.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Element [%d] = ", i);
        scanf("%d", &a[i]);
    }
}


int main ()

{   int check=0;
    int a[100],n;
    printf("Please enter size of array:");
	scanf("%d",&n);
    NhapMang(a,n);
     int min=a[0];
	for ( int i = 1; i < n; i++)
    {
        if (min > a[i]){
            min = a[i];
         	check = i+1;
        }
    }
    printf("The smaller element:%d-It position %d ",min,check);
    printf("\n");
	system ("pause");
  	return(0);

}

