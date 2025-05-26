#include <stdio.h>
#include <stdlib.h> // Required for abs()

void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b; // Derefencing pointers to get values
    int absDiff = abs(*a - *b); // Ensure absolute difference
    *a = sum; // Modify the original values
    *b = absDiff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
