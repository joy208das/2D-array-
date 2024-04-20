/*write a code to find the sum of all elements in a metrix (nxm)*/

#include<stdio.h>
int main(){

int r;
int c;
int sum=0;
scanf("%d",&r);
scanf("%d",&c);
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
 printf("\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       sum=sum+arr[i][j];
    }
    printf("\n");
}
printf("%d",sum);
    return 0;
}