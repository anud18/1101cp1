#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
        int n;
        char arr[120000];
        char *de = "dequeue";
        int queue[3000];
        int front = 0;
        int rear = 0;
        scanf("%d\n", &n);
        for(;n > 0;n --){
                scanf(" %s", arr);
                if (strncmp(arr, de, 7) == 0)
                {
                        if (front != rear)
                                printf("%d\n", queue[front++]);
                        else
                                printf("empty\n");
                }
                else{
                        scanf(" %d\n", &queue[rear++]);
                        int i = 0;
                        while(!isdigit(arr[i]))
                        {
                                i++;
                        }
                }
        }
}
