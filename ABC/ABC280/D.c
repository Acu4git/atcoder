#include<stdio.h>
#include<stdbool.h>

typedef struct c{
    long data;
    struct c *next;
}CELL;

CELL head;

bool isPrime(long x){
    long i;
    for(i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

long *primeFactorization(long K){
    
}

int main(){
    long i,K;scanf("%ld",&K);
    if(K==2){
        puts("2");
    }else if(K==3){
        puts("3");
    }else if(K>=4){
        bool flag=isPrime(K);
        if(flag==true){
            printf("%ld",K);
        }else{
            CELL *p;
        }
    }
    
}