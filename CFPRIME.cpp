// problem url -https://www.codechef.com/problems/CFPRIME

#include<iostream>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		long long input,n=0,flag=0 ,i;
		cin>>input;
		long long temp;
		for (i=0;i<input;i++){
			cin>>temp;
			if (temp==0){
				n++;
				continue;
			}
			while(temp>0){
				n++;
				temp /= 10;
			}
		} 
		  for(i = 2; i < n; i++)  
		  {  
		      if(n % i == 0)  
		      {  
		          // cout<<"Number is not Prime."<<endl;  
		          flag=1;  
		          break;  
		      }  
		  }  
		  if (flag==0)  cout<<"Yes"<<endl;
		  else cout<<"No"<<endl;
	}
}
