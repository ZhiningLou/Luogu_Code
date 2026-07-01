#include<iostream>
using namespace std;
double a,b;
int main(){
    scanf("%lf%lf",&a,&b);
    printf("%.2lf",1.0/((1.0/a)+(1.0/b)));
    return 0;
}