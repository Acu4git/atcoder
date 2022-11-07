#include<stdio.h>
#include<stdlib.h>
 
 
int main(){
    unsigned long long a,i,K,X;scanf("%llu%llu",&X,&K);
    a=1;
    for(i=0;i<K;i++){
        a*=10;
        if((X%a)>=5*a/10){
            X/=a;
            X=a*X+a;
        }else{
            X/=a;
            X=a*X;
        }
    }
    printf("%llu",X);
    return 0;
}