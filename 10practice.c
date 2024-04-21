/*given a matrix 'a' of dimension 
n x m and 2 coordinates(l1,r1) and (l2,r2).
Return the sum of the rectangel from 
(l1,t1) to (l2,r2) */

#include<stdio.h>
int main(){
int r,c;
scanf("%d%d",&r,&c);
int arr[r][c];
int sum=0;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=1;j<4;j++){
        sum =sum +arr[i][j];
    }
}
printf("%d",sum);
    return 0;
}