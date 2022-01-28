// problem url https://www.codechef.com/problems/KTTABLE

#include <iostream>
#include <vector>
using namespace std;
int main(){

    int testcases;
    cin>>testcases;
    while(testcases--){
        int n,i=0,count=0,temp;
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
            if(j==0){
                if(a[j]>=b[j]){
                    count++;
                }
            }
            else if ((a[j]-a[j-1])>=b[j]){
                count++;
            }
        }
        cout<<count<<endl;

    }
}
