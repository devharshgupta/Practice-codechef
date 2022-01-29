// problem url https://www.codechef.com/problems/COPS

#include <iostream>

using namespace std;
int main(){

    int testcases;
    cin>>testcases;
    while(testcases--){

    int m,x,y,i=0,lowest_safe_house,higest_safe_house,count=0;
    cin>>m>>x>>y;
    int cops_house_no[m];
    while(i<m){
        cin>>cops_house_no[i];
        i++;
    }
    i=0;
    int cops_strength =x*y;
    int house[101] = {0};
    while (i<m){
        lowest_safe_house = cops_house_no[i] - cops_strength;
        if (lowest_safe_house < 1){
                lowest_safe_house = 1;
            }
        higest_safe_house = cops_house_no[i] + cops_strength;
        if (higest_safe_house > 101){
                higest_safe_house = 100;
            }
       //cout<<lowest_safe_house<<"*****"<<higest_safe_house<<"*****";
        for (int j = lowest_safe_house ; j<=higest_safe_house;j++){
           house[j]=1;
        }
        i++;
    }
    for (int j = 1;j<101;j++){
         //  cout<<j<<"-"<<house[j]<<" ";
            if (house[j]== 0){
                count++;
            }

        }
        cout<<count<<endl;
    }
}
