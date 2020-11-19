/*
 * @Sushant Modgil Write a C program to input n numbers in an array, 
 * calculate the sum of all prime numbers and sum of all even numbers
 * in the array and print the larger sum.
 */

#include<stdio.h>

int is_prime(int n) {
    if (n <= 2) {
        return 0;
    }
    int c;
    for (c = 2; c < n ; c++) {
        if (n % c == 0) {
            return 0;
        }  
    }
    return 1;
}
 
int main(int argc, char **argv)
{
    int n, p;
    int num_array[n];
    int sum_prime = 0;
    int sum_even = 0;

    printf("Enter array length: ");
    scanf("%d",&n);

    p = 2;
    while (p <= n) {
        if (is_prime(p)) {
	    sum_prime += p;
        }
	if (p % 2 == 0) {
	    sum_even += p;
	}
	num_array[p] = p;
        p++;
    }

    printf("the array is: ");
    for (int i = 0; i <= n; i++) {
	    printf("%d, ", num_array[i]);
    }
    printf("\ngreatest sum: %d", sum_prime > sum_even ? sum_prime : sum_even);
    printf(" sum of %s\n", sum_prime > sum_even ? "prime" : "even");

    return 0;
}
