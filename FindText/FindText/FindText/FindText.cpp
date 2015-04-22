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
	int counter = 1;
	while (!In_file.eof())
	{
		std::getline(In_file, str);
		if (str == argv[2])
		{
			cout << "Text found in " << counter << " string." << endl;
			system("Pause");
			return 0;
		}
		counter++;
	}

	cout << "Text not found" << endl;
	In_file.close();
	system("Pause");
	return 1;
}

