#include <stdio.h>

int factorial(int n){
    if (n <= 1)
        return 1;
    else
        return (n*factorial(n - 1));
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d!= %d\n",n, factorial(n));

    return 0;
}
