#include<iostream>
using namespace std;
int a,b;
int main(){
    scanf("%d%d",&a,&b);
    a=20000/(3.14*a*b*b)+1;
    printf("%d",a);
    return 0;
}