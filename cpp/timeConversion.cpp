#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
    // Creating partitioned strings of string 's'
    string hour = s.substr(0, 2);
    string minute = s.substr(3, 2);
    string second = s.substr(6, 2);
    string period = s.substr(8, 2);
    
    int hourInt = stoi(hour); // convert to int for math
    
    if (period == "AM") {
        if (hourInt == 12) {
            hourInt = 0; // Midnight case
        }
    } else {
        if (hourInt != 12) {
            hourInt += 12; // Afternoo/evening case   
        }
    }
    
    // Format back to 2-digit hour
    string newHour = (hourInt < 10 ? "0" : "") + to_string(hourInt);
    
    return newHour + ":" + minute + ":" + second;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
