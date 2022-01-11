#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,m,times;
	int ans = 1;
	int tmp;
	scanf("%d",&times);
	for(int j = 0;j < times; j++){
		scanf(" %d %d", &n,&m);
		n = n % 1007;
		while(m){
			if(m & 1)
				ans = (ans * n) % 1007;
			n = (n * n) % 1007;
			m >>= 1;

		}
		printf("%d\n", ans);
		ans =1;}
}
