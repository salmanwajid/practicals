#include <iostream>
using namespace std ;

int main ()  { 

	int age ;
		cout<<"Type your age"<<endl ;
	cin>>age ;
	
	if (age>=18 && age<40){
		
		cout<<"your are allowed to my party "<<endl;
	}
	
	else if (age>=40){
		
		cout<<"Go for prayers not parties"<<endl;
	}
	
	else{
		cout<<"Sorry but we can not let you join us"<<endl;
	}
	
	
	
	
	return 0;
}
