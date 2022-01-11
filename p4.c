#include<stdio.h>
int main(){
	int times;
	scanf("%d", &times);
	for(int i = 0; i < times; i ++){
		int j = 0;
		int arr[32] = {};
		long long number;
		long long tmp;
		scanf(" %lld", &number);
		tmp = number;
		while(number != 0){
			arr[j] = number % 2;
			number >>= 1;
			j++;
		}
		int count = j;
		if (tmp != 0)
		{	while(j != -1){
			if (j != count)
				printf("%d",arr[j]);
			else
				if(arr[j] != 0)
					printf("%d",arr[j]);
			j--;
		}
	}
		else
			printf("0");
		printf("\n");
	}
}

