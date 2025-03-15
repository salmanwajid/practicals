#include <iostream>
using namespace std;

int main ( ) {
	
	string yourname;
	int rollno;
char grade;
double tmarks=170.0,obtmarks;

	cout<<"student's name : ";
	cin>>yourname;
	
	cout<<"Roll NO : ";
	cin>>rollno;
	

 cout<<"Obtained marks : ";
 cin>>obtmarks;
 
 if (obtmarks >170.0|| obtmarks <0){
 	
 	cout<<"your entering an invalid number";
 	return 1;
 }
 
 
 double percent= (obtmarks/170.0)*100;
	cout<<"your have scored :"<<percent<<"%";



	if (percent >=80&& percent<=100){
		
	grade='a';
	
	}
	
	else if (percent >=70&& percent<80){
		grade ='A';
	}
	
	else if (percent>=60 && percent<70){
		grade ='B';
	
	}
	else if (percent>=50 && percent<60){
		grade='C';
			}
			
	else if (percent>=40 && percent <50){
		grade='D';
		
	}
	else if (percent<40){
		grade='F';
	
	}
		else {
			cout<<"unknown error"<<endl;
			
		}
		
		
	switch (grade){
		
	case 'a':
		
		cout<<"\n\nMr :"<<yourname<<endl;;
	
		cout<<"Roll NO :"<<rollno<<endl;
	
		cout<<"percentage :"<<percent<<"%"<<endl;
	
		cout<<"NIce JOb :"<<endl;
	
	break;
	
	case 'A':
	
		cout<<"Mr :"<<yourname<<endl;;
	
		cout<<"Roll NO :"<<rollno<<endl;
	
		cout<<"percentage :"<<percent<<"%"<<endl;
	
		cout<<"well try ,you can improve more"<<endl;
		
		break;
		
		case 'B':

		cout<<"Mr :"<<yourname<<endl;;

		cout<<"Roll NO :"<<rollno<<endl;

		cout<<"percentage :"<<percent<<"%"<<endl;

		cout<<"Need more hard work :"<<endl;
		
		break;
		
		case 'C':

			cout<<"Mr :"<<yourname<<endl;;

		cout<<"Roll NO :"<<rollno<<endl;

		cout<<"percentage :"<<percent<<"%"<<endl;

		cout<<"Unsatisfied :"<<endl;
		
		break;
		
		case'D':

			cout<<"Mr :"<<yourname<<endl;;

		cout<<"Roll NO :"<<rollno<<endl;

		cout<<"percentage :"<<percent<<"%"<<endl;

		cout<<"poor result :"<<endl;
		
	break;

	case'F':

		cout<<"Mr :"<<yourname<<endl;;

		cout<<"Roll NO :"<<rollno<<endl;

		cout<<"percentage :"<<percent<<"%"<<endl;

		cout<<"your can not go to next class :"<<endl;

		break;
		
		default:
			
			cout<<"something gone wrong "<<endl;
	}
	
	
		
	return 0;
}
