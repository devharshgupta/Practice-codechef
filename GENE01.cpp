// problem url  https://codeforces.com/contest/791/problem/A

#include <iostream>

using namespace std;
int main(){

    char p1,p2;
    cin>>p1>>p2;
   
    // brown(most common )> blue> green (rarest) that means if any parent will have brown eyes it is likely child will have brown eyes and green only if both the parent have green eyes 

    if (p1==p2){
        cout<<p1;
        return 0;
    }
    if (p1=='R' || p2=='R'){
        cout<<'R';
        return 0;
    }

    cout<<'B';
    return 0;

}
