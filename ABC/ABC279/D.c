#include<stdio.h>
#include<math.h>

double max(double n1,double n2){
    return n1>n2?n1:n2;
}

double f(double a,double b,double x){
    return b*x+a/sqrt(x+1);
}

int main(){
    long long A,B;scanf("%lld%lld",&A,&B);
    if((B-A/2)>=0){
        printf("%lf",A);
    }else{
        double tmp,tmp_u,tmp_d,ans_u,ans_d;
        tmp=pow((A/(2*B)),(double)(2/3))-1;
        
        ans_u=f(A,B,ceil(tmp));
        ans_d=f(A,B,floor(tmp));
        if(ans_u>ans_d){
            printf("%lf",ans_d);
        }else{
            printf("%lf",ans_u);
        }
    }
    return 0;
}