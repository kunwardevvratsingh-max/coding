#include<iostream>
using namespace std;
bool sqDiff(long long m){
    if(m<2){
        return false;
    }
    for(long long i=2;i*i<=m;i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
    

int main(){
    int n;
    cin>>n;
    while(n--){
        long long x,y;
        cin>> x >>y;
    
    if (x - y != 1) {
            cout << "NO\n";
        } else {
            long long m = x + y;
            if (sqDiff(m)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}