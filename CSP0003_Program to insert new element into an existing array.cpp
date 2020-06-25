#include<stdio.h>
#include<stdlib.h>
//enter input
void enterArray(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Element[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
// display output
void display_Array(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("%d  ", a[i]);
    }
}
// ham sap xep mang tang dan
void sort_array_ascending(int a[],int n){
    int k;
    for ( int i = 0; i < n-1; i++)
    {
        for ( int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j]; // hoan vi hai phan tu
                a[j]=k;
            }      
        }   
    }
} 

// xoa phan tu o 1 vi tri 
void delete_value_in_position(int a[],int &n,int position){
for ( int i = position; i < n; i++)
	{
    	a[i]=a[i+1];
	}
	n--;
}

// them phan tu o 1 vi tri
void add_value_in_position(int a[], int &n, int new_Value, int position){ 
    
	// Dich chuyen mang de tao o trong truoc khi them.
    for(int i = n; i > position; i--){
        a[i] = a[i-1];
    }
    // Chen value tai position
    a[position] = new_Value;
    // Tang so luong phan tu sau khi chen.
    ++n;
}

// them phan tu vao vi tri cuoi mang
void add_new_value (int a[],int &n,int new_Value)
{	
    a[n]=new_Value;
    n++;
}


int main()
{   
    int n;
    printf("Please enter size of array: ");
    scanf("%d",&n);
  	int *a=(int *)malloc(n*sizeof(int));
    enterArray(a,n);
    printf("The array after sorting:\n");
    sort_array_ascending(a,n);
    display_Array(a,n);
    
    /* Add new value entered to the sorted array in ascending order 
        and then display new array on the screen
    */
    int new_Value;
    printf("\nPlease enter new value: ");
    scanf("%d",&new_Value);
	   	a[n]=new_Value;
   		n++;
    //add_new_value(a,n,new_Value);
	sort_array_ascending(a,n);
    printf("New array:\n");
    display_Array(a,n);
    free(a);
    return 0;
}
