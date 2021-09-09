#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
#include <stdlib.h>


using namespace std;

struct element {
	int number; 
	string symbol;
};

void line() {
	puts("-----------------");
}

//example
element List[101] = {
{31,"Ga"},{32,"Ge"},{35,"Br"},{37,"Rb"},{38,"Sr"},{46,"Pd"},
{47,"Ag"},{48,"Cd"},{50,"Sn"},{53,"I"},{54,"Xe"},{74,"W"},
{79,"Au"},{80,"Hg"},{82,"Pb"},{86,"Rn"},{87,"Fr"},{118,"Og"}
};
constexpr int ElementNum = 18;

bool loop() {
	system("cls");
	
	printf("1. Number\n");
	printf("2. Symbol\n");
	printf("3. Option\n");
	printf("4. Exit\n");
	

	int input;
	cin >> input;
	
	
	if(input == 1) {
		system("cls");
		
		int LoopNum;
		cout << "Input Number Of Loop : ";
		cin >> LoopNum;
		
		for(int i=1;i<=LoopNum;i++) {
			line();
		    int Idx = rand()%ElementNum;
		    cout << "Number : " << List[Idx].number << "\n";
			cout << "Symbol : ";
		    
			string in; 
			cin >> in;
			
		    cout << "Answer : " << List[Idx].symbol << "\n";
	    }
	    Sleep(1000);
	    return true;
	}
	
	if(input == 2) {
		system("cls");
		
		int LoopNum;
		cout << "Input Number Of Loop : ";
		cin >> LoopNum;
		
		for(int i=1;i<=LoopNum;i++) {
			line();
		    int Idx = rand()%ElementNum;
		    cout << "Symbol : " << List[Idx].symbol << "\n";
			cout << "Number : ";
		    
			string in; 
			cin >> in;
			
		    cout << "Answer : " << List[Idx].number << "\n";
	    }
	    
	    Sleep(1000);
	    return true;
	}
	
	if(input == 3) {
		system("cls");
		printf("Developing");
		Sleep(1500);
		return true;
	}
	
	if(input == 4) {
		system("cls");
	    return false;	
	} 
	
	// end
		system("cls");
		printf("Wrong Input.");
		Sleep(2000);
		return true;
	
}

int main() {
	srand(time(NULL)); // rand()
	while (loop());
}
