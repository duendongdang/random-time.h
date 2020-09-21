#include <iostream>
#include <time.h>
using namespace std;
int Guess(int);
int main()

{
	srand(time(NULL));
	int num,Round;
	num = rand() % 10 + 1;
	
	cout << "Welcome to guessing number game " << endl;
	cout << "Secret number has been chosen : " << num << endl;
	
	
	Round = Guess(num);

	cout << "Congratulations! " << endl;
	cout << "The secret number is " << num<< endl;
	cout << "You made " << Round << " guesses " << endl;

	
	system("pause");
	return(0);
}


int Guess(int num){
	
	int some,Round = 0;

	do{
		cout << "Guess the number (1 to 10) :";
		cin >> some;

		if(some < num) cout << "The secret number is lower" << endl;
		else if(some > num) cout << "The secret number is higher"<<endl;
	
		Round++;

	}while (some != num);

	return Round;
}