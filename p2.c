#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char arr[220] = {};
	scanf("%s", arr);
	int arrc[220] = {};
	int j = 0;
	int counta = 0;
	while(isdigit(arr[j])){
		counta++;
		j++;
	}
	j++;
	int countb = 0;
	while(isdigit(arr[j])){
		countb++;
		j++;
	}
	/*printf("%d %d\n", counta,countb);*/
	int arra[220] = {};
	int arrb[220] = {};
	for(int i = 0; i < counta; i++){
		arra[i] = arr[i] - '0';
	}
	int tmp = counta;
	for(int i = 0; i < countb; i++){
		arrb[i] = arr[counta + 1 + i] - '0';
	}
	for(int i = 0; i < counta; i++){
		/*printf("%d", arra[i]);*/
	}
	/*printf("\n");*/
	for(int i = 0; i < countb; i++){
		/*printf("%d", arrb[i]);*/
	}
	int count = 0;
	if(counta >= countb){
		for(int i = 0; i < counta; i++){
			int a = arra[counta - 1 - i];
			int b;
			if(countb > i)
				b = arrb[countb - 1 - i];
			else
				b = 0;
			arrc[counta  - i] = (a+b) % 10 + count;
			count = (a + b) /10;
		}
		if (count == 1)
		printf("1");
		for(int i = 1;i <= counta; i++){
			printf("%d", arrc[i]);
		}
	}
	else {
		for(int i = 0; i < countb; i++){
			int a;
			if(countb > i)
				a = arra[counta - 1 -i];
			else
				a = 0;
			int b = arrb[countb - 1 - i];

			arrc[countb  - i] = (a+b) % 10 + count;
			count = (a + b) /10;
		}
		if(count == 1)
			printf("1");
		for(int i = 1;i <= countb; i++){
			printf("%d", arrc[i]);
		}
	}




}
