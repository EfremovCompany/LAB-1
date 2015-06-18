// Task1.cpp : Defines the entry point for the console application.
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

	ifstream fInput(argv[1]);
	ofstream fOutput(argv[2]);

	if (!fInput)
	{
		cout << "Input file opening error" << endl;
		return 1;
	}
	if (!fOutput)
	{
		cout << "Output file opening error" << endl;
		return 1;
	}
  
	string buff;
	while (!fInput.eof())
	{
		getline(fInput, buff);
		fOutput << buff + "\n";
	}

	fInput.close();
	fOutput.close();

	return 0;
}

