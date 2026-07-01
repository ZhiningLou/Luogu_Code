#include<iostream>
#include<cmath>
using namespace std;
int a;
int main(){
    scanf("%d",&a);
    if(a%4==0){
        if(a%100!=0){
            printf("1");
            return 0;
        }
        else if(a%400==0){
            printf("1");
            return 0;
        }
        else{
            printf("0");
            return 0;
        }
    }
    printf("0");
    return 0;
}