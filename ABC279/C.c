#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,H,W;scanf("%d%d",&H,&W);

    char **s,**t;
    s=(char**)malloc(sizeof(char*)*H);
    t=(char**)malloc(sizeof(char*)*H);
    for(i=0;i<H;i++){
        s[i]=(char*)malloc(sizeof(char)*(W+1));
        scanf("%s",s[i]);
    }
    for(i=0;i<H;i++){
        t[i]=(char*)malloc(sizeof(char)*(W+1));
        scanf("%s",t[i]);
    }
    //js:sのj列目
    //jt:tのj列目
    int js,jt;
    js=jt=0;
    i=0;
    while(js<W&&jt<W){
        while(i<H){
            if(s[i][js]==t[i][jt]){
                i++;
            }else{
                char tmp;
                for(i=0;i<H;i++){
                    tmp=s[i][js];
                    for(j=i+1;j<H;j++){
                        
                    }
                }
            }
        }
        if(i==H){
            js++;
            jt++;
        }
    }
    
}