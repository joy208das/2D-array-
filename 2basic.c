#include<stdio.h>
int main(){

    /* 5 5 
       3 2 
      this i want to print 
      2x2 matrix */

// for declaration 
int arr[2][2];
 
arr[0][0]=5 ;
arr[0][1]=5;
arr[1][0]=3;
arr[1][1]=2;

/*also we can declare like this

int arr[2][2]={{5,5},{3,2}};
or 
int arr[2][2]={5,5,3,2};
*/
// for print

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
printf("%d",arr[i][j]);

    }
    printf("\n");
}

    return  0;
}