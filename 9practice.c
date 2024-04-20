/*Find the maximum element and minimum element in a 2D array*/


#include<stdio.h>
int main(){

int r;
int c;
int i,j;

scanf("%d",&r);
scanf("%d",&c);
int arr[r][c];
int max= arr[0][0];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
 printf("\n");

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(arr[0][0]<arr[i][j]){
max=arr[i][j];
        }
    }
    
}
printf("%d",max);
    return 0;
}