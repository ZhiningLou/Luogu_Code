#include <iostream>
using namespace std;
int main(){
	int T,i;
    int n, k;
    long long num;
	scanf("%d", &T);
	for (i=0;i<T;i++)
	{
		scanf("%d%d", &n, &k);
		num=(1+k)*1LL*k/2;
		if (num <= n){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}