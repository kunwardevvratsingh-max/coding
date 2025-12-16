#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    

    vector<pair<string, string>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    int count=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]==v[j]){
                count++;
                break;
            }
        }
    }
    cout<<(n-count);


}