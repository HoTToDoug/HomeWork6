#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Quest_1: " << endl;
	int* pptt = foo();
	delete[] pptt;
	cout << "------------------------------------" << endl;

	
	cout << "Quest_3:" << endl;
	cout << "How many create file's?: ";
	int a;
	cin >> a;
	string x;

	for (size_t i = 0; i < a; i++)
	{
		cout << "Enter file name(.txt): ";
		cin >> x;
		ofstream fout(x);
		fout << "Hello World_" << i << "!";
		fout.close();
	};
	cout << "------------------------------------" << endl;
	cout << "Quest_4:" << endl;

	cout << "Merge files?(yes/no): ";
	string solution, fileName, first_solution, second_solution;
	cin >> solution;
	if (solution == "yes")
	{
		cout << "Enter filename to merge(.txt): ";
		cin >> fileName;
		cout << "Enter first file name(.txt): ";
		cin >> first_solution;
		cout << "Enter second file name(.txt): ";
		cin >> second_solution;
		ofstream fout(fileName);
		ifstream fin(first_solution);
		if (fin.is_open())
		{
			string buf;
			while (!fin.eof())
			{
				getline(fin, buf);
			}
			ifstream fin(second_solution);
			if (fin.is_open())
			{
				string get;
				while (!fin.eof())
				{
					getline(fin, get);
				}
				fin.close();
				fout << buf << endl;
				fout << get << endl;
			}
			else
			{
				cout << "Error!";
			}
			fin.close();
		}
		else
		{
			cout << "Error!";
		}
		fout.close();
	}
	else
	{
		cout << "quest_4 complited!";
	};

	return 0;
}