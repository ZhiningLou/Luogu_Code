#include<iostream>
#include<cmath>
using namespace std;
int a;
int main(){
    scanf("%d",&a);
    if(a==1){
        printf("Today, I ate 1 apple.");
        return 0;
    }
    if(a==0){
        printf("Today, I ate 0 apple.");
        return 0;
    }
    printf("Today, I ate %d apples.",a);
    return 0;
}