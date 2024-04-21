/*Write a program to print the row 
number having the maximum sum in a 
given matrix*/

#include<stdio.h>
int main(){
int r,c;
 int arr[r][c];
 scanf("%d%d",&r,&c);
int sum=0;
 for(int i=0;i<1;i++){
for(int j=0;j<3;j++){
  sum= sum + arr[i][j];
}

 }
 printf("%d",sum);


    return 0;
}