#include <iostream>
#include <string>
using namespace std;

int count_letters(string str);
int main() {
	int letters;
	string quote;
	cout << "enter a quote: ";
	getline(cin, quote);
	letters = count_letters(quote);
	cout << "Letters: " << letters;

}

int count_letters(string str) {
	int characters = str.length();
	int letter = 0;
	for (int i = 0; i < characters; i++) {
		str.substr(i, 0);
		if (str.substr(i, 1) == "q" || str.substr(i, 1) == "w" || str.substr(i, 1) == "e"
			|| str.substr(i, 1) == "r" || str.substr(i, 1) == "t" || str.substr(i, 1) == "y" 
			|| str.substr(i, 1) == "u" || str.substr(i, 1) == "i" || str.substr(i, 1) == "o"
			|| str.substr(i, 1) == "p" || str.substr(i, 1) == "a" || str.substr(i, 1) == "s"
			|| str.substr(i, 1) == "d" || str.substr(i, 1) == "f" || str.substr(i, 1) == "g"
			|| str.substr(i, 1) == "h" || str.substr(i, 1) == "j" || str.substr(i, 1) == "k"
			|| str.substr(i, 1) == "l" || str.substr(i, 1) == "z" || str.substr(i, 1) == "x"
			|| str.substr(i, 1) == "c" || str.substr(i, 1) == "v" || str.substr(i, 1) == "b"
			|| str.substr(i, 1) == "n" || str.substr(i, 1) == "m" || str.substr(i, 1) == "Q" 
			|| str.substr(i, 1) == "W" || str.substr(i, 1) == "E" || str.substr(i, 1) == "R"
			|| str.substr(i, 1) == "T" || str.substr(i, 1) == "Y" || str.substr(i, 1) == "U"
			|| str.substr(i, 1) == "I" || str.substr(i, 1) == "O" || str.substr(i, 1) == "P"
			|| str.substr(i, 1) == "A" || str.substr(i, 1) == "S" || str.substr(i, 1) == "D"
			|| str.substr(i, 1) == "F" || str.substr(i, 1) == "G" || str.substr(i, 1) == "H"
			|| str.substr(i, 1) == "J" || str.substr(i, 1) == "K" || str.substr(i, 1) == "L"
			|| str.substr(i, 1) == "Z" || str.substr(i, 1) == "X" || str.substr(i, 1) == "C"
			|| str.substr(i, 1) == "V" || str.substr(i, 1) == "B" || str.substr(i, 1) == "N"
			|| str.substr(i, 1) == "M") {
			letter++;
		}
	}
	return letter;
}

