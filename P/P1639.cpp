#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int a,b,x,y;
    int ans1,ans2,ans3,ans;
    cin>>a>>b>>x>>y;
    ans1=abs(a - b);
    ans2=abs(a - x)+abs(b - y);
    ans3=abs(a - y)+abs(b - x);
    ans=min({ans1,ans2,ans3});
    cout<<ans<<"\n";
    return 0;
}