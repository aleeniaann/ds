//SPARSE MATRIX

#include<stdio.h>
#include<stdlib.h>
#define max 100
void readmatrix(int row,int col,int matrix[20][20])
{
int i,j;
for(i=0; i<row; i++)
for(j=0; j<col; j++)
scanf("%d",&matrix[i][j]);
}

void print(int row,int col,int matrix[20][20])
{
 printf("\n<-----MATRIX----->\n");
 for(int i=0; i<row; i++)
 {
  for(int j=0; j<col; j++)
  {
    printf("%d\t",matrix[i][j]);
   }
   printf("\n");
  }
}


int smatrix(int row,int col,int matrix[20][20],int sparse[20][3])
{
 int k=1,c=0;
 sparse[0][0]=row;
 sparse[0][1]=col;
 for(int i=0; i<row; i++)
 for(int j=0; j<col; j++)
 if(matrix[i][j]!=0)
  {
    sparse[k][0]=i;
    sparse[k][1]=j;
    sparse[k][2]=matrix[i][j]; 
    k++;
    c++;
  }
  sparse[0][2]=c;
  return c+1;
}

int main()
{
 int matrix[20][20],sparse [20][3];
 int r,c,spc=3;
 printf("Enter the number of rows :");
 scanf("%d",&r);
 printf("Enter the number of columns :");
 scanf("%d",&c);
 printf("Enter the elements one by one\n");
 readmatrix(r,c,matrix);
 print(r,c,matrix);
 int tot_row=smatrix(r,c,matrix,sparse);
 printf("\n<-----SparseMATRIX----->\n");
 for(int i=0; i<tot_row; i++)
 {
  for(int j=0; j<3; j++)
  {
    printf("%d\t",sparse[i][j]);
   }
   printf("\n");
  }
  printf("\n<-----SPARSE TRANSPOSE----->\n");
 for(int i=0; i<3; i++)
 {
  for(int j=0; j<tot_row; j++)
  {
    printf("%d\t",sparse[j][i]);
   }
   printf("\n");
  }
  
 return 0;
 }