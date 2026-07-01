#include<iostream>
#include<cstdio>
using namespace std;
int num,ans,max_ans;
bool time_table[1024];
int x[1024],y[1024];
int main(){
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d%d",&x[i],&y[i]);
    }
    for(int i=1;i<=num;i++){
        ans=0;
        for(int j=0;j<1024;j++){
            time_table[j]=false;
        }
        for(int j=0;j<num;j++){
            if(i==j) continue;
            for(int k=x[i];k<y[i];k++){
                time_table[k]=true;
            }
        }
        for(int j=0;j<num;j++){
            if(time_table[j]){
                ans++;
            }
        }
        if(ans>max_ans){
            max_ans=ans;
        }
    }
    printf("%d\n",max_ans);
    return 0;
}