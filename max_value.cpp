#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    
    // Setting max_value to the first input
    int max_value = a;
    
    if (b > max_value) {
        max_value = b;
    }
    if (c > max_value) {
        max_value = c;
    }
    if (d > max_value) {
        max_value = d;
    }
    
    return max_value;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
