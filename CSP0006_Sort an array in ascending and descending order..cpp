#include<stdio.h>
#include <stdlib.h>

void enterArray(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Element[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void outputArray(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("%5d",a[i]);
    }
}

// sap xep tang dan
void array_sorted_in_ascending (int a[],int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j =  i+1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
// sap xep giam dan
void array_sorted_in_descending(int a[],int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

void array_sorted (int a[],int n,int check){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j =  i+1; j < n; j++){
            if((a[i]-a[j])*check>0){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

int main ()
{   
	int n;
    printf("Please enter size of array: ");
    scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int*));
    enterArray(a,n);
    array_sorted_in_ascending(a,n);
    //array_sorted(a,n,1);
    printf("The array sorted in ascending:\n");
    outputArray(a,n);
    array_sorted_in_descending(a,n);
    //array_sorted(a,n,-1);
    printf("\nThe array sorted in descending:\n");
    outputArray(a,n);
}

