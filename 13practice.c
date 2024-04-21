/*Write a program to Print the 
transpose of the matrix entered by the user*/


#include<stdio.h>
int main(){

int r;
int c;
scanf("%d",&r);
scanf("%d",&c);
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
 printf("\n");

for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}
    return 0;
}

/*we can also store the value in another 2D array 
brr[c][r]
in 2nd for brr[c][r]=arr[j][i];
then print it in another for loop like 2nd for loop (same conditions)
*/