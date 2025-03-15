#include <iostream>
using namespace std ;

int main ( ) {
	
	int age ;
	cout<<"Put your age"<<endl;
	cin>> age ;
	
	if (age>=30){
		
		
	if (age>=50 && age<80){
		cout<<"you should rest at home"<<endl;
		}	
		
		
		else if (age>=80) {
			cout<<"your are too old to survive on earth"<<"\n";
		}
		
		
		else{
			cout<<"hey old man"<<endl;
		}
	}
	
	else if (age>=20) {
		
		cout<<"hello young man"<<endl;
	}
	
	else {
		cout<<"your are a boy"<<endl;
	}
	
	
	return 0;
}
