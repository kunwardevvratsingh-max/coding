#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<2){
        return false;
    }
     for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int factors(int n){
     int count =0;
   

    for(int p = 2; p * p <= n; p++) {
        while(n % p == 0) {
            count++;
            n /= p;
        }
    }
    if(n > 1){
        count++;
     } 
    return count;

}
int main(){
    int n,m;
    cin>> n >> m;
    int ans=0;
    for(int i=n;i<=m;i++){
        int sum=factors(i);
        if(isPrime(sum)){
            ans++;
        }
       

        
    }
   cout<<ans<<"\n";
    
}
