#include<stdio.h>
#include<stdlib.h>

int main(){
    int N,M;scanf("%d%d",&N,&M);
    int **x=(int**)malloc(sizeof(int*)*M);
    int i,j,*k=(int*)malloc(sizeof(int)*M);
    for(i=0;i<M;i++){
        scanf("%d",&k[i]);
        x[i]=(int*)malloc(sizeof(int)*k[i]);
        for(j=0;j<k[i];j++){
            scanf("%d",&x[i][j]);
        }
    }

    int l,m,cnt=0,cnt_i,cnt_j;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            int max=0;
            for(m=0;m<M;k++){
                for(l=0;l<k[i];l++){
                    if(x[m][l]==i+1) cnt_i=1;
                    if(x[m][l]==j+1) cnt_j=1;
                }
                cnt=cnt_i+cnt_j;
                if(cnt>max) max=cnt;
            }
            if(max<2){
                puts("No");
                exit(1);
            }
        }
    }
    puts("Yes");
    return 0;
}