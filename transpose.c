// transpose of a matix
#include<stdio.h>
int main(){
int rows,cols,n,i,j;
printf("\n enter number of rows:");
scanf("%d",&rows);
printf("enter number of coloumns");
scanf("%d",&cols);
int arr [rows][cols];
int transposed[cols][rows];
printf("enter elements of the %d %d matrix:\n",rows,cols);
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        transposed [j][i] = arr[i][j];
    }
}
printf("transposed matrix:\n");
for(i=0;i<cols;i++){
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
}
return 0;
}
