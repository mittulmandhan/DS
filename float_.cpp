#include<iostream>
using namespace std;
int main(){
	
	
	
	char flag= 'y' ;
	
	while(flag == 'y') {
	
	float tarun = 7.2;
	
	float pawan = 0.0;
    tarun = 10.2;
	cout<< "value is : " << tarun << endl;
	cout<< "enter the value : " ;

	cin>> pawan;
	tarun = pawan;
	
	cout<< "total value is : " << tarun << endl;
	
	
	cout <<"If you want to continue press 'y' ... else press any key..";
	cin>>flag;
	}
	
	
	//cout << tarun;
	return 0;
}
