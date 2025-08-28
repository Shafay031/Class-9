#include <stdio.h>
int main(){
	int Numbers[10]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int i=0;
	int even = 0;

    for (;i<14;i++){
        if (Numbers[i]%2==0){
            even++;
        }
    }
    printf("There are %d even numbers in the array.\n", even);

    return 0;
}

