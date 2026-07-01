#include<iostream>
using namespace std;
int a,b,c,d,T1,T2;
int main(){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    T1=a*60+b;
    T2=c*60+d;
    T1=T2-T1;
    a=T1/60;
    b=T1%60;
    printf("%d%d",a,b);
    return 0;
}