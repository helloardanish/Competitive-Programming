#include <iostream>

int main() {
	using namespace std;
	
	char ch;
	int count = 0; // use basic input
	
	cout << "Enter characters; enter # to quit:\n";
	
	cin >> ch;// get a character
	while (ch != '#'){ // test the character
		cout << ch; // echo the character
		++count; // count the character
		cin >> ch; // get the next character
	}
	
	cout << "\n" << count << " character read." << endl;
	return 0;
}

