#include<iostream>
#include<cmath>
using namespace std;
double a,b,m;
int n,ans_H,t,ans_M;
int main(){
    scanf("%lf%lf",&a,&b);
    n=1920;
    t=ceil(a/b)+10;
    n=n-t;
    if(n>=24*60){
        n-=24*60;
    }
    ans_M=n%60;
	ans_H=n/60;
    if(ans_H<10)
	{
		if(ans_M<10){
            printf("0%d:0%d",ans_H,ans_M);
        }
		else{
            printf("0%d:%d",ans_H,ans_M);
        }
	}
	else
	{
		if(ans_M<10){
            printf("%d:0%d",ans_H,ans_M);
        }
		else{
            printf("%d:%d",ans_H,ans_M);
        }
	}
	return 0;

}
