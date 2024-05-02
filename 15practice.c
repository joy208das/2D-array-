/*matrix multiplication */

#include<stdio.h>
int main(){
int r1,c1,r2,c2;
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
int arr[r1][c1],brr[r2][c2],re[r1][c2];



//for 1st matrix
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        scanf("%d",&arr[i][j]);
    }
}

//for 2nd matrix
for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        scanf("%d",&brr[i][j]);
    }
}

//for result matrix

for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
re[i][j]=0;
        for(int k=0;k<c1;k++){
          re[i][j]=re[i][j]+ arr[i][k]*brr[k][j];
        }
    }
}

//for print result
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        printf("%d",re[i][j]);
    }
    printf("\n");
}


    return 0;
}
