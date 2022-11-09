#include<stdio.h>

char maxNum(int **p,int idx_i,int idx_j){
    int tmp;

}

int main(){
    int n;scanf("%d",&n);
    int i,j,k,a[10][10];
    char ans[11]="0000000000",buf[11]="0000000000";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            buf[0]='0'+a[i][j];
            for(k=1;k<n;k++){
                buf[k]=maxNum(a,i,j);
            }
        }
    }

}