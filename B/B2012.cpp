#include<iostream>
using namespace std;
double a,b;
int main(){
    scanf("%lf%lf",&a,&b);
    b=b*100;
    printf("%.3lf%%",b/a);
    return 0;
}
