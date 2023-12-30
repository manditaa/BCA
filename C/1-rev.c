#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    // printf("%d \n",n);
    int sum=0;

    while(n>0){
        int rem=n%10;
        sum=(sum*10)+rem;
        n/=10;
    }

    printf("%d",sum);

}