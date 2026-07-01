#include<iostream>
#include<cmath>
using namespace std;
int a,b,c,d;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    if(b==0){
        printf("0");
        return 0;
    }
    d=a*b;
    a=a-ceil((double)c/b);
    if(a<0){
        printf("0");
        return 0;
    }
    printf("%d",a);
    return 0;
}