/* Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even.
If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print
"Correct values", otherwise print "Wrong values".*/

#include <stdio.h>

int main() {
    int p, q, r, s;

    printf("Input the first integer: ");
    scanf("%d", &p);

    printf("Input the first integer: ");
    scanf("%d", &q);

    printf("Input the first integer: ");
    scanf("%d", &r);

    if (p > q && p > r)
    {
        printf("Correct Values!");  
    } else if (p < q && q > r)
    {
        printf("Correct Values!");
    } else {
        printf("Wrong Values!");
    }
    
    
}