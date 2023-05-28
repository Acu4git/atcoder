#include<stdio.h>

int main(){
    int n,x;scanf("%d%d",&n,&x);
    int i;
    int p[101];
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        if(p[i]==x){
            printf("%d",i+1);
        }
    }
    return 0;
}