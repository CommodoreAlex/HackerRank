#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize type string for a,b
    string a, b;
    
    // Read input strings
    cin >> a >> b;
    
    // Print their lengths
    cout << a.size() << " " << b.size() << endl;
    
    // Print concatenated string
    cout << a + b << endl;
    
    // Swap first characters and print modified strings
    swap(a[0], b[0]);
    cout << a << " " << b << endl;
    
    return 0;
}
