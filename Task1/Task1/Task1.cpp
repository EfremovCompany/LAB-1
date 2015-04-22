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
	FILE *fInput = fopen(argv[1], "rb");
	FILE *fOutput = fopen(argv[2], "wb");
	if (fInput == NULL || fOutput == NULL)
	{
		cout << "File opening error" << endl;
		return 1;
	}
  
	// ���������� ch ������ ����� ��� int, � �� char
	int ch;
	// ���� ������ ������������ ���� ��� ���������� ������� �� ������ ����� EOF (-1)
	while ((ch = fgetc(fInput)) != EOF)
	{
		//putchar(ch);
		fputc(ch, fOutput);
	}

	if (fInput != NULL)
	{
		// ���������, ������������ ������� fclose, �� ������ ���� ����� NULL
		fclose(fInput);
		fInput = NULL;
	}
	if (fOutput != NULL)
	{
		// ���������, ������������ ������� fclose, �� ������ ���� ����� NULL
		fclose(fOutput);
		fOutput = NULL;
	}

	system("Pause");
	return 0;
}

