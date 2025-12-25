#include<iostream>
using namespace std;
int fibonacci(int n){
	if(n==0){
		return 0;
	}
	
	else if(n==1){
		return 0;
	}
	
	else if(n==2){
		return 1;
	}
	
	else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
	return fibonacci(n);
}


int main(){
	int n,i;
	cout<<"enter the base case of the  fibonacci sequence: ";
	cin>>n;
	
	cout<<"The fibonacci series of " << n<< " is: ";                                          
	for(i=1; i<=n; i++){
		cout<< fibonacci(i)<< " ";
	}
	cout<<"\nfibonacci of " <<n<< " from the series is " << fibonacci(n) <<endl;

	return 0;
}