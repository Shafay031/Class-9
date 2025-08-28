#include <stdio.h>

int main(){
    int N;
	int i=1,sum =0;

    printf("Enter a number N: ");
    scanf("%d",&N);

    while(i<=N){
        if(i % 4 == 0){
            sum += i;
        }
        i++;
    }
printf("Sum of even number %d is: %d\n", N, sum);
    return 0;
}
