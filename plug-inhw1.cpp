#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1;
    for(int i=0;i<s.size();i++){
        if(!s1.empty()&& s1.back()==s[i]){
            s1.pop_back();
        }else{
            s1.push_back(s[i]);
        }
    }
    cout<<s1;
}
