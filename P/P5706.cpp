#include<iostream>
using namespace std;
int main(){
    double a;
    int b;
    scanf("%lf%d",&a,&b);
    a=a/b;
    b=2*b;
    printf("%.3lf\n%d",a,b);
    return 0;
}