#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // Convert both strings to lowercase
    for (int i = 0; i < s1.length(); i++) {
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }

    // Compare strings
    if (s1 < s2){
        cout << -1;
    }else if (s1 > s2){
        cout << 1;
    }else{
        cout << 0;
    }

    return 0;
}
