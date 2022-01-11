
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int times;
scanf("%d", &times);
for(int i = 0;i < times;i++){
	int n;
	scanf(" %d", &n);
	int *arr = malloc(n * sizeof(int));
	for(int j = 0;j < n;j++){
		scanf("%d", &arr[j]);
	}
	for(int k = (n - 1); k > 0; k--){
		printf("%d ", arr[k]);
	}
	printf("%d\n", arr[0]);
	free(arr);
}
}
