#include <iostream>
using namespace std;

int main(){
	double grade;
	
	cout << "\nWhat is your final grade in CSC 1300? ";
	cin >> grade;
	
	if(grade > 70)
		cout << "Yay! You can move on to CSC 1310!\n";
	if(grade < 70)
		cout << "Sorry, you must make a C or better in CSC 1300 to take CSC 1310.\n";
	
	return 0;
}
