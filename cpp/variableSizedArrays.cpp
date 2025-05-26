#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Init n (number of variable-length arrays) and q (number of queries)
    int n, q;
    cin >> n >> q;

    // Initializing an integer type vector of vectors called 'data' (2D Vector)
    vector<vector<int>> data;

    for (int i = 0; i < n; ++i) {
        int k; // Read size of current array
        cin >> k;
        
        // Creates an integer type vector named row of size k
        vector<int> row(k);
        
        // Reads k integers from input and stores them into row
        for (int j = 0; j < k; ++j) {
            cin >> row[j];
        }
        data.push_back(row);
    }

    // Processing the queries, loop over q
    for (int query = 0; query < q; ++query) {
        int i, j; // i (which array to look at (0-based) j (which element in that array)
        cin >> i >> j;
        cout << data[i][j] << endl; // Access and print the jth element of the ith array
    }

    return 0;
}
