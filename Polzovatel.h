#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include <fstream>

using namespace std;

class Polzovatel
{
public:
	 string login, password;

	 void EnterInSystem()
	 {
		 setlocale(LC_ALL, "rus");
		 ofstream EnterInSystem("EnterInSystem.txt");
		 system("cls");
		 cout << "¬ведите Ћогин: " << endl;  
		 cin >> login; EnterInSystem << login << endl;
		 cout << "¬ведите пароль: " << endl;
		 cin >> password;  EnterInSystem << password << endl;
	 }
};

class Admin:Polzovatel
{
public:
	void EnterInSystem()
	{
		setlocale(LC_ALL, "rus");
		ofstream EnterInSystem("EnterInSystem.txt");
		system("cls");
		cout << "¬ведите Ћогин: " << endl;
		cin >> login; EnterInSystem << login << endl;
		cout << "¬ведите пароль: " << endl;
		cin >> password;  EnterInSystem << password << endl;
		
	}
};

class User:Polzovatel
{
public:
	void EnterInSystem()
	{
		setlocale(LC_ALL, "rus");
		ofstream EnterInSystem("EnterInSystem.txt");
		system("cls");
		cout << "¬ведите Ћогин: " << endl;
		cin >> login; EnterInSystem << login << endl;
		cout << "¬ведите пароль: " << endl;
		cin >> password;  EnterInSystem << password << endl;

	}
};