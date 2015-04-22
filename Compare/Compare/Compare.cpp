// Compare.cpp : Defines the entry point for the console application.
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

	ifstream first_file;
	first_file.open(argv[1]);
	ifstream second_file;
	second_file.open(argv[2]);

	if (!first_file || !second_file)
	{
		cout << "File opening error" << endl;
		return 1;
	}

	string compare_one = "", compare_two = "";
	int counter = 1;
	bool check = true;

	while (check && (!first_file.eof() || !second_file.eof()))
	{
		std::getline(first_file, compare_one);
		std::getline(second_file, compare_two);
		if (compare_one != compare_two)
		{
			cout << "Files are different. Line number is " << counter << endl;
			check = false;
		}
		counter++;
	}
	
	if (check)
	{
		cout << "Files are equal" << endl;
	}

	first_file.close();
	second_file.close();

	system("Pause");
	return 0;
}

