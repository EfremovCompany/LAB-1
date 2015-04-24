// FindText.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "Wrong number of params" << endl;
		return 1;
	}

	ifstream In_file(argv[1]);
	/*In_file.open(argv[1]);*/
	if (!In_file)
	{
		cout << "File opening error" << endl;
		return 1;
	}

	string str;
	bool wasFound = false;
	int counter = 1;
	while (!In_file.eof())
	{
		std::getline(In_file, str);
		std::size_t found = str.find(argv[2]);
		if (found != std::string::npos)
		{
			cout << "Text found in " << counter << " string." << endl;
			wasFound = true;
		}
		counter++;
	}
	if (!wasFound)
	{
		cout << "Text not found" << endl;
		return 1;
	}
	system("Pause");
	return 0;
}

