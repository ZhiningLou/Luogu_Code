#include<iostream>
#include<cmath>
using namespace std;
int a;
bool b,c;
int main(){
    scanf("%d",&a);
    if(a%2==0)b=true;
    if(a<=12&&a>4)c=true;
    if(c==true){
        if(b==true){
            printf("1 1 0 0");
        }
        else{
            printf("0 1 1 0");
        }
    }
    else{
        if(b==true){
            printf("0 1 1 0");
        }
        else{
            printf("0 0 0 1");
        }
    }
    return 0;
}