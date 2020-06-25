#include<stdio.h>
#include <stdlib.h>

void enter_array(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Element[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void output_array(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("%-5d",a[i]);
    }
}
// Ham xoa phan tu vi tri k 
void Delete(int a[], int &n, int k)
{
	for(int i = k ; i < n; i++)
	{
		a[i]= a[i+1];
	}
	n--; 
}
int main ()
{
    int n;
    int a[100];
    printf("Please enter size of array:");
    scanf("%d",&n);
    enter_array(a,n);
    printf("\nThe original array:\n");
    output_array(a,n);
    for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; j++){
			if (a[i] == a[j])
			{
				Delete(a,n,j);
				i--;				
			}
		}
	}
	printf("\n");
    printf("\nThe array after removing duplicate elements:\n");
    output_array(a,n);
	printf("\n");
	system ("pause");
  	return(0);

    
}
