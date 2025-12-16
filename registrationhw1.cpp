
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> gb;
    string name;

    while (n--) {
        cin >> name;
    

        if (gb[name] == 0) {
            cout << "OK\n";
            gb[name] = 1;
        } else {
            cout << name << gb[name] << "\n";
            gb[name]++;
        }
    }
    
}
