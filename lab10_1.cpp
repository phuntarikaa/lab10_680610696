#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int ggez=1;
	char grade;
	do{
		cout << "Student [" << ggez << "]: ";
		cin >> grade; 
		
		if(grade=='0') {
		    break;
		    
		} 
		
		if(grade=='A'){ 
		    count[0]++;
		    ggez++;
		}else if(grade=='B'){
		    count[1]++;
		    ggez++;
		}else if(grade=='C'){
		    count[2]++;
		    ggez++;
		}else if(grade=='D'){
		    count[3]++;
		    ggez++;
		}else if(grade=='F'){
		    count[4]++;
		    ggez++;
		
		}else{ 
		    cout<<"Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "In total "<<ggez-1<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
		
	
	return 0;
}