#include<stdio.h>
int main(){
	long long xa,ya,xb,yb;
	scanf("%lld %lld", &xa, &ya);
	scanf(" %lld %lld", &xb, &yb);
	long long area = (xa - xb) * (ya - yb);
	area = area > 0 ? area : -area;
	printf("%lld", area);
}
