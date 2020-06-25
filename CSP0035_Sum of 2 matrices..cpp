#include<stdio.h>
void enter_sizeo_matrix(int &m, int &n)
{
    printf("Enter size of matrix: ");
    scanf("%d %d",&m,&n);
    
}

void accept_Matrix(int a[][100],int m, int n){
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++)
      {
         scanf("%d", &a[i][j]);
      }
      //printf("\n");
    }
}

void calculate_sum_2_matrices(int a[][100],int a1[][100],int a2[][100],int m,int n){
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++)
      {
         a[i][j]=a1[i][j]+a2[i][j];
      }
      printf("\n");
    }
}

void display(int a[][100],int m,int n){
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
          printf("%5d",a[i][j]);
      }
      printf("\n");
    }
}
int main(){
    int m,n;
    enter_sizeo_matrix(m,n);
    int a[100][100],a1[100][100],a2[100][100];
    printf("Accept matrix m1:\n");
    accept_Matrix(a1,m,n);
    printf("Accept matrix m2:\n");
    accept_Matrix(a2,m,n);
    printf("Ouput: m = m1 + m2:");
    calculate_sum_2_matrices(a,a1,a2,m,n);
    display(a,m,n);

}
