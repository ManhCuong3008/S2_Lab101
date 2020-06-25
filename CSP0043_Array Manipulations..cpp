#include<stdio.h>
#include<stdlib.h>
// function 1
int add_a_value (int a[],int &n,int &pos,int value)
{	
	n++;
	a[pos]=value;
	pos++;
}

// function 2 
void search_a_value (int a[],int n,int value){
	int check =0;
	for(int i = 0;i < n; ++i){
        if(a[i]==value){
			check =1;
			break;
		}
		else
		{
			check =0;
		}
    }
    if(check==1){
    printf("The value exist in the array\n");
    }
    else {
		printf("The value not exist in the array\n");
	}
}
void delete_value_in_position(int a[],int &n,int position){
for ( int i = position; i < n; i++)
	{
    	a[i]=a[i+1];
	}
	n--;
}

//function 3 
void remove_first_existence_of_a_value (int a[], int &n)
{	
	int value;
	printf("Enter a value you want to remove first existence: ");
	scanf("%d",&value);
	for(int i = 0;i < n; ++i){
       if(a[i]==value)
	   {
	   	delete_value_in_position(a,n,i);
	   	break;
	   }
    }
}
//function 4
void remove_all_existence_of_a_value (int a[], int &n)
{	
	int value;
	printf("Enter a value you want to remove existence: ");
	scanf("%d",&value);
	for(int i = 0;i < n; ++i){
       if(a[i]==value){
	   	delete_value_in_position(a,n,i);
	   }
    }
}


// function 5
void display_array (int a[],int n){
	printf("\nThe array:\n");
	for(int i = 0;i < n; ++i){
        printf("%d  ", a[i]);
    }
    printf("\n\n");
}

// function 6
void array_sorted_in_ascending (int a[],int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j =  i+1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    printf("\nThe array sorted:\n");
	for(int i = 0;i < n; ++i){
        printf("%d  ", a[i]);
    }
}

// function 7
void array_sorted_in_descending(int a[],int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    printf("\nThe array sorted:\n");
	for(int i = 0;i < n; ++i){
        printf("%d  ", a[i]);
    }
}

int main(){
	int a[100],b[100],value,value1,key;
	int n=0, pos=0;
	while(1){
	int key;
	printf("\n1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Remove the first existence of a value\n");
	printf("4- Remove all existences of a value\n");
	printf("5- Print out the array \n");
	printf("6- Sort the array in ascending order (positions of elements are preserved)\n");
	printf("7- Sort the array in descending order (positions of elements are preserved)\n");
	printf("8- Quit\n");
	printf("Choose the menu: ");
	fflush(stdin);
	scanf("%d",&key);
	switch(key)
		{
	case 1:
		printf("Enter a value: ");
		scanf("%d",&value);
		add_a_value(a,n,pos,value);
		break;
	case 2:
		printf("Enter a value you want to srearch: ");
		scanf("%d",&value1);
		search_a_value(a,n,value1);
		break;
	case 3:
		remove_first_existence_of_a_value(a,n);
		break;
	case 4:
		remove_all_existence_of_a_value(a,n);
		break;
	case 5:
		display_array(a,n);
		break;
	case 6:
		for(int i=0;i<=n;i++){
			b[i]=a[i];
		}
		array_sorted_in_ascending(b,n);
		break;
	case 7:
		for(int i=0;i<=n;i++){
			b[i]=a[i];
		}
		array_sorted_in_descending(b,n);
		break;
	default:
		exit(0);
		}
	}
}	
