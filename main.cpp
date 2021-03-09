#include <iostream>
#include <string>
#include <cctype>

using namespace std;
char changeLetters(char letters);

int main()
{
	string splitString[4];
 	int spot = 0;
	string input;
	splitString[0] = '1';

	cout << "* - * - * Handy Dandy Phone Number Conversion * - * - *";
	cout << "\n\nPlease enter a phone number or ‘9’ to end.";
 	//loop until terminating number is entered
	while (splitString[0].at(0) != '9')
    {
		cout << "\n\n\tInput phone number: ";
		getline(cin,input);
	
		//loop to put each section into array
		for (int i = 0; i < 4; ++i)
		{
			spot = input.find("-");
			splitString[i] = input.substr(0,spot);
			input = input.substr(spot+1);
		}
		if (splitString[0].at(0) != '9')
		{
			cout << "\tReal phone number: ";
			char c;
			changeLetters(c);
						
			//loop to convert each letter into a number
			for (int i = 1; i < 4; ++i)
			{
				cout << "-";
				for (int j = 0; j < splitString[i].length(); ++j)
				{	
					c = splitString[i].at(j);
					c = toupper(c);
					c = changeLetters(c);
					cout << c;
				}
			}
		}
	}
	cout << "\n\n* - End of Program - *";
	return 0;
}

char changeLetters(char letters)
{
	if(letters == 'A' || letters == 'B' || letters == 'C')
	return '2';
	

	else if(letters == 'D' || letters == 'E' || letters == 'F')
	return '3';
	

	else if(letters == 'G' || letters == 'H' || letters == 'I')
	return '4';
	

	else if(letters == 'J' || letters == 'K' || letters == 'L')
	return '5';
	

	else if(letters == 'M' || letters == 'N' || letters == 'O')
	return '6';
	

	else if(letters == 'P' || letters == 'Q' || letters == 'R' || letters == 'S')
	return '7';
	
	else if(letters == 'T' || letters == 'U' || letters == 'V')
	return '8';
	

	else if(letters == 'W' || letters == 'X' || letters == 'Y' || letters == 'Z')
	return '9';
	
	else 
	return letters;
	
}