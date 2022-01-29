// problem url - https://www.codechef.com/problems/CNOTE

#include <iostream>
using namespace std;
int main(){

    int testcases;
    cin>>testcases;
    while(testcases--){

        int x,y,k,n,flag=0;
        cin>>x>>y>>k>>n;
        int page[n],price[n];
        for(int i=0;i<n;i++){
            cin>>page[i]>>price[i];
        }

        for (int j=0;j<n;j++){
            if (page[j]>=(x-y)&& price[j]<=k){
                flag=1;
                break;
            }
        }

        if (flag==1){
            cout<<"LuckyChef\n";
        }else{
        cout<<"UnluckyChef\n";
        }
    }

}
