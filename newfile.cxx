#include <iostream>
using namespace std;

int main(){
	//this is an interactive code between the user and the console.it accepts input from the user.
	
	int age ;
	string surname;
	string first_name;
	string last_name;
	
	cout <<"Enter your surname: " << endl;
	cin >> surname;
	cout <<"Enter your first_name: " << endl;
	cin >> first_name;
	cout <<"Enter your last_name: " << endl;
	cin >> last_name;
	cout <<"Enter your age: " <<endl;
	cin >> age;
	
	cout << "your name is" <<surname<<first_name<<last_name<< endl;
	cout << first_name << endl;
	cout << last_name << endl;
	cout << age << endl;
	
	cout <<"My name is " <<surname<<first_name<<last_name <<age<<"years old "<<endl;
	return 0;
}