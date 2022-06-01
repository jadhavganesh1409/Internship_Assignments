#include <stdio.h>

int mat1[10][10], mat2[10][10], mult[10][10];

void accept(int mat[][10], int r, int c){
  printf("Enter elements of matrix:\n");
  for(int i=0; i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&mat[i][j]);
    }
  }
}

void display(int mat[][10],int r, int c){
 for(int i=0;i<r;i++){
   for(int j=0;j<c;j++){
     printf("%d\t",mat[i][j]);
   }
   printf("\n");
 }
}

void multiply(int mat1[][10],int mat2[][10],int r1,int c1,int c2){
  printf("Matrix after multiplication:\n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      for(int k=0;k<c1;k++){
        mult[i][j]+=mat1[i][k]*mat2[k][j];
      }
    }
  }
}
int main(void) {
  int r1,r2,c1,c2;
  printf("Enter row and column of 1st matrix: ");
  scanf("%d%d",&r1,&c1);
  accept(mat1,r1,c1);
  printf("Matrix:\n");
  display(mat1,r1,c1);
 do{
   printf("Enter row and column of 2nd matrix (Number of rows od 2nd matrix must be equal to number of column of 1st matrix: ");
  scanf("%d%d",&r2,&c2);
 }while(r2!=c1);
  accept(mat2,r2,c2);
  printf("Matrix:\n");
  display(mat2,r2,c2);
  multiply(mat1,mat2,r1,c1,c2);
  display(mult,r1,c2);
  }