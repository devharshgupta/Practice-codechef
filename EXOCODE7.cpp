#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int units;
	float bill =0.0;
	cin>>units;
	if (units>0){
		if (units>50){
			bill = bill + 50*0.5;
			units -= 50;
		}
		else 
			{
				bill += units*0.5;
				units =0;
			}
	}
	// cout<<units<<"****"<<bill<<endl;
	if (units>0){
		if (units>100){
			bill += 100*0.75;
			units -= 100;
		}
		else 
			{
				bill += units*0.75;
				units =0;
			}
	}
	// cout<<units<<"****"<<bill<<endl;
	if (units>0){
		if (units>100){
			bill += 100*1.2;
			units -= 100;
		}
		else 
			{
				bill += units*1.2;
				units =0;
			}
	}
	// cout<<units<<"****"<<bill<<endl;
	if (units>0){
		
			bill += units*1.5;
			units =0;
			
	}
	// cout<<bill<<endl;
	// cout<<typeid(bill).name();
	bill = bill + bill*0.20;
	cout<<setprecision(2)<<fixed<<bill<<endl;

}