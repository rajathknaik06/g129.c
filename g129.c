/*Lea is learning pointer arithmetic. Her teacher tasked her with writing a program to calculate the sum of an arithmetic progression (AP) based on the initial term (a1), the common difference (d), and the number of terms (n). Help her by writing the code using pointer arithmetic.



Formula: Sum of AP = (n * (2 * a1 + (n - 1) * d)) / 2.

Input format :
The first line consists of an integer a1, representing the initial term.

The second line consists of an integer d, representing the common difference.

The third line consists of an integer n, representing the number of terms.

Output format :
The output displays the sum of the arithmetic progression series as an integer.*/

#include <stdio.h>

int main() {
    int firstTerm, commonDifference, numTerms, sum;
    scanf("%d", &firstTerm);
    scanf("%d", &commonDifference);
    scanf("%d", &numTerms);

    int* firstTermPtr = &firstTerm;
    int* commonDifferencePtr = &commonDifference;
    int* numTermsPtr = &numTerms;
    int* sumPtr = &sum;

    *sumPtr = (*numTermsPtr * (2 * (*firstTermPtr) + ((*numTermsPtr - 1) * (*commonDifferencePtr))) / 2);

    printf("%d\n", *sumPtr);

    return 0;
}
