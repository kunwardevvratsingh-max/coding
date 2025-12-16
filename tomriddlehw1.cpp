#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << "NO "; 
    
    for(int i=1;i<n;i++){
        bool same=false;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                same =true;
                break;
                
            }
           
            
        }
        if(same){
            cout<<"YES"<<" ";
        }else{
            cout<<"NO"<<" ";
        }
    }

}