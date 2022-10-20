#include <stdio.h>
#include <stdlib.h>


void sumproduct(int n1, int n2, int *sum, int *product){
    *sum = n1 + n2;
    *product = n1 * n2;
}



int main()
{
    int n1, n2, *sum, *product;
    printf("Please enter two numbers\n");
    scanf("%d %d", &n1, &n2);
    sumproduct(n1, n2, &sum, &product);
    printf("The sum is: %d  and the product is: %d", sum, product);
    return 0;
}
