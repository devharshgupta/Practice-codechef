// codechef problem url  -> https://www.codechef.com/problems/NUTLOOP

#include <iostream>
#include<algorithm>
using namespace std;
int main(){

    int testcases;
    cin>>testcases;
    while(testcases--){
        int n,i=0,num;
        cin>>n;
        int a[n],b[n];

        while(i<n){
            cin>>a[i];
            i++;
        }
        i=0;
        while(i<n){
            cin>>b[i];
            i++;
        }
        for (int j=0;j<n;j++ ){
            num = max(a[j],b[j])*10 + min(a[j],b[j]);
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
