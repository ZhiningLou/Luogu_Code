#include<iostream>
using namespace std;
int a,b,c,d;
long long a1,b1,c1,d1;
bool check(long long x,long long y){
    int num1,num2;
    num1=x;
    num2=y;
    if(num1*num2==x*y){
        return false;
    }
    return true;
}
int main(){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a1=a;
    b1=b;
    c1=c;
    d1=d;
    if(check(a1,c1)||check(a1,d1)||check(b1,c1)||check(b1,d1)){
        printf("long long int");
        return 0;
    }
    printf("int");
    return 0;
}