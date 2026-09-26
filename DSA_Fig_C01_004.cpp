#include<iostream>
#include<string>
using namespace std;

// Recursive routine to print an integer
void printOut(int n){
	if ( n >=10)
		printOut(n/10);
	cout << n%10 <<"\n";
}

int main(int argc, char* argv[]){
	printOut(stoi(argv[1]));
//	cout << stoi(argv[1]) /3;	
	return 0;
}
