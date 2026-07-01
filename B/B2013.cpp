#include<iostream>
using namespace std;
double temp;
int main(){
    scanf("%lf",&temp);
    printf("%.5lf",(temp-32)*5/9);
    return 0;
}