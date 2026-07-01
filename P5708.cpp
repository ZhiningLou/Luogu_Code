#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double p,ans,a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    p=(a+b+c)/2.0;
    ans=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",ans);
    return 0;
}