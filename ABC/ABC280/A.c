#include<stdio.h>

int main(){
    int cnt=0,i,j,H,W;scanf("%d%d",&H,&W);
    char m[10][11];
    for(i=0;i<H;i++){
        scanf("%s",m[i]);
    }
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            if(m[i][j]=='#')cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}