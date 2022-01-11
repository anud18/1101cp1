#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
        int n,m,times;
        int tmp;
        scanf("%d",&times);
        for(int j = 0;j < times; j++){
                scanf(" %d %d", &n,&m);
                n = n % 1007;
                tmp = n;
                /*m %= 1007;*/
                int a,b;
                if ((m % 2) == 1)
                {
                                m--;
                                tmp = n * n;
                                m = m / 2;
                                while(m--){
                                        n = (n * tmp);
                                        n %= 1007;
                                }
                                printf("%d\n", n);

                }
                else if(m == 0)
                  printf("1\n");
                else{
                        n = n * n;
                        tmp = n;
                        m = m / 2;
                        while(--m){
                                n = (n * tmp);
                                n %= 1007;
                        }
                        printf("%d\n", n);}
        }
}
