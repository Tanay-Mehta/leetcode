#include <stdio.h>
#include <stdlib.h>
void main(){
    int list[5] = {6, 7, 8, 9, 10};
    int n = sizeof(list)/sizeof(list[0]);
    int i;
    printf("enter your number: ");
    int num;
    scanf("%i", &num);
    int j;
    for(i=0;i <= n;i++){
        if(i<num){
            for(j=i+1;j<= n;j++){
                if(list[j] + list[i] == num){
                    printf("%i, %i; ", i, j);
                    break;
                }
            }
        }
    }
}
