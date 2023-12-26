/*matrix multiplication make sure that the number columns of the first 
matrix and the number of rows of the second must be the same*/

#include<stdio.h>

main()

{

int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;

printf("enter the number of row=");

scanf("%d",&r);

printf("enter the number of column=");

scanf("%d",&c);

printf("enter the first matrix element=\n");

for(i=0;i<r;i++)

{

for(j=0;j<c;j++)

{

scanf("%d",&a[i][j]);//scan user value matrix 1st

}

}

printf("enter the second matrix element=\n");

for(i=0;i<r;i++)

{

for(j=0;j<c;j++)

{

scanf("%d",&b[i][j]);//scan user value matrix 2nd

}

}

printf("multiply of the matrix=\n");

for(i=0;i<r;i++)

{

for(j=0;j<c;j++)

{

mul[i][j]=0;

for(k=0;k<c;k++)

{

mul[i][j]+=a[i][k]*b[k][j]; //result of matrix

}

}

}

//for printing result

for(i=0;i<r;i++)

{

for(j=0;j<c;j++)

{

printf("%d\t",mul[i][j]);//Printing the multiplication of matrix

}

printf("\n");

}



}
