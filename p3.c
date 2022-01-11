#include<stdio.h>
#include<stdlib.h>
int main(){
	char arr[111111] = {};
	scanf("%s", arr);
	int i =0;
	while(i != sizeof(arr)){
	switch(arr[i]){
		case 'A':
			arr[i] = 'U';
			break;
		case 'T':
			arr[i] = 'A';
			break;
		case 'C':
			arr[i] = 'G';
			break;
		case 'G':
			arr[i] = 'C';
			break;
	
	}
	i++;
	}
	printf("%s", arr);
}
