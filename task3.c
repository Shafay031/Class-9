#include <stdio.h>

int main(){
	int i = 4;
	int j = 1;
    for(;i<=10;i++){
        printf("Table of %d:\n", i);
        for(;j <= 10; j++){
            printf("%d x %d = %d\n",i, j,i * j);
        }
        printf("\n");
    }
    return 0;
}
