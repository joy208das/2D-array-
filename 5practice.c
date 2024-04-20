/*Write a program to store roll number and 
marks obtained by 4 students side by in a matrix.*/

 /*     roll marks
             0   1   
    rahul 0  76  80
    samit 1  12  52
    joy   2  25  90 
    diya  3  24  99
    
    */
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
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}