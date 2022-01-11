
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
long long a,b,c,n;
scanf("%d", &n);
while(n > 0){
	n--;
	scanf(" %lld %lld %lld", &a, &b, &c);
	switch(a){
		case 1:
			printf("%lld\n", c+b);
			break;
		case 2:
			printf("%lld\n", b - c);
			break;
		case 3:
			printf("%d\n", b * c);
			break;
		case 4:
			printf("%d\n", b / c);
			break;
	}
}
}
