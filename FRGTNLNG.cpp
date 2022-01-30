// problem url - https://www.codechef.com/problems/FRGTNLNG

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){

    int testcases;
    cin>>testcases;
    while(testcases--){
       int n,k;
       cin>>n>>k;
       string fl[n];
       string kl,temp;

        for (int i=0;i<n;i++){
            cin>>fl[i];
        }
        
        for (int l=0;l<k;l++){
            int k2;
            cin>>k2;
            for (int i =0;i<k2;i++){
            cin>>temp;
            kl += temp;
        
            }
            
        }
       
        for (int j=0;j<n;j++){
            // cout<<kl.find(fl[j])<<endl;
            if (kl.find(fl[j]) != std::string::npos){
                cout<<"YES ";
            }
            else cout<<"NO ";
        }

        cout<<"\n";
    }

}
