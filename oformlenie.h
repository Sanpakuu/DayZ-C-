#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include <fstream>

using namespace std;

class oformlenieEu1
{
private:
	int price = 140;
	int days = 4;
	int k;
	string c, number, f, i, o;
public:

	void PrintoformlenieEu1() {
		setlocale(LC_ALL, "rus");
		ofstream klient("Klient1Eu.txt");
		system("cls");
		cout << "������: ������" << endl << "��������� ���: Wonderful Latvia" << endl; 	klient <<  "///////////////////////////////////////////////////////////" << endl << "������: ������" << endl << "��������� ���: Wonderful Latvia" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k  << " EUR" << endl; 
		klient << "�������� ��������� ����: " << price * k  << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number; 
			klient << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient.close();

		}
		 
		
	 }

};

class oformlenieEu2
{
private:
	int price = 145;
	int days = 5;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieEu2() {
		setlocale(LC_ALL, "rus");
		ofstream klient1("Klient2Eu.txt");
		system("cls");
		cout << "������: ������" << endl << "��������� ���: Unforgettable Czech Republic" << endl; 	klient1 << "///////////////////////////////////////////////////////////" << endl << "������: ������" << endl << "��������� ���: Unforgettable Czech Republic" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient1 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k  << " EUR" << endl;
		klient1 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient1 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient1 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient1 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient1 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient1.close();

		}


	}

};

class oformlenieEu3
{
private:
	int price = 161;
	int days = 7;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieEu3() {
			setlocale(LC_ALL, "rus");
			ofstream klient2("Klient3Eu.txt");
			system("cls");
			cout << "������: ������" << endl << "��������� ���: Graceful Carpathians" << endl; 	klient2 << "///////////////////////////////////////////////////////////" << endl << "������: ������" << endl << "��������� ���: Graceful Carpathians" << endl;

			cout << "�������� ���������� ����: " << endl;
			cin >> days; klient2 << "���������� ����: " << days << endl;
			cout << "�������� ��������� ����: " << price * k  << " EUR" << endl;
			klient2 << "�������� ��������� ����: " << price * k  << " EUR" << endl;
			cout << "������� ����������?\t\t Y/N" << endl;
			cin >> c;
			if (c == "Y") {
				cout << "������� ���� ����� ��������: " << endl;  cin >> number;
				klient2 << "����� ��������: " << number << endl;
				cout << "������� ���� �������: " << endl;	cin >> f;
				klient2 << "�������: " << f << endl;
				cout << "������� ���� ���: " << endl;	cin >> i;
				klient2 << "���: " << i << endl;
				cout << "������� ���� ��������: " << endl;	cin >> o;
				klient2 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
				cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
				klient2.close();

			}


	}

};

class oformlenieAs1
{
private:
	int price = 1860;
	int days = 7;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieAs1() {
		setlocale(LC_ALL, "rus");
		ofstream klient3("Klient1As.txt");
		system("cls");
		cout << "������: ����" << endl << "��������� ���: Night Thailand" << endl; 	klient3 << "///////////////////////////////////////////////////////////" << endl << "������: ����" << endl << "��������� ���: Night Thailand" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient3 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient3 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient3 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient3 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient3 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient3 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient3.close();

		}


	}

};

class oformlenieAs2
{
private:
	int price = 2140;
	int days = 6;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieAs2() {
		setlocale(LC_ALL, "rus");
		ofstream klient4("Klient2As.txt");
		system("cls");
		cout << "������: ����" << endl << "��������� ���: Inoccent Bali" << endl; 	klient4 << "///////////////////////////////////////////////////////////" << endl << "������: ����" << endl << "��������� ���: Inoccent Bali" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient4 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient4 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient4 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient4 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient4 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient4 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient4.close();

		}


	}

};

class oformlenieAf1
{
private:
	int price = 953;
	int days = 10;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieAf1() {
		setlocale(LC_ALL, "rus");
		ofstream klient5("Klient1Af.txt");
		system("cls");
		cout << "������: ������" << endl << "��������� ���: Sacrificial Egypt" << endl; 	klient5 << "///////////////////////////////////////////////////////////" << endl << "������: ������" << endl << "��������� ���: Sacrificial Egypt" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient5 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient5 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient5 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient5 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient5 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient5 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient5.close();

		}


	}

};

class oformlenieAf2
{
private:
	int price = 1134;
	int days = 12;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieAf2() {
		setlocale(LC_ALL, "rus");
		ofstream klient6("Klient2Af.txt");
		system("cls");
		cout << "������: ������" << endl << "��������� ���: Great Egypt" << endl; 	klient6 << "///////////////////////////////////////////////////////////" << endl << "������: ������" << endl << "��������� ���: Great Egypt" << endl;  
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient6 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient6 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient6 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient6 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient6 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient6 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient6.close();

		}


	}

};

class oformlenieNAmer1
{
private:
	int price = 1632;
	int days = 12;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieNAmer1() {
		setlocale(LC_ALL, "rus");
		ofstream klient7("Klient1NAmer.txt");
		system("cls");
		cout << "������: �������� �������" << endl << "��������� ���: Magnificent West" << endl; 	klient7 << "///////////////////////////////////////////////////////////" << endl << "������: �������� �������" << endl << "��������� ���: Magnificent West" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient7 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient7 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient7 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient7 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient7 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient7 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient7.close();

		}


	}

};

class oformlenieNAmer2
{
private:
	int price = 2323;
	int days = 15;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieNAmer2() {
		setlocale(LC_ALL, "rus");
		ofstream klient8("Klient2NAmer.txt");
		system("cls");
		cout << "������: �������� �������" << endl << "��������� ���: Hot Mexico" << endl; 	klient8 << "///////////////////////////////////////////////////////////" << endl << "������: �������� �������" << endl << "��������� ���: Hot Mexico" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient8 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient8 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient8 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient8 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient8 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient8 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient8.close();

		}


	}

};

class oformlenieSAmer1
{
private:
	int price = 1570;
	int days = 7;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieSAmer1() {
		setlocale(LC_ALL, "rus");
		ofstream klient9("Klient1SAmer.txt");
		system("cls");
		cout << "������: ����� �������" << endl << "��������� ���: The Magic of Machu Picchu" << endl; 	klient9 << "///////////////////////////////////////////////////////////" << endl << "������: ����� �������" << endl << "��������� ���: The Magic of Machu Picchu" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient9 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient9 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient9 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient9 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient9 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient9 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient9.close();

		}


	}

};

class oformlenieSAmer2
{
private:
	int price = 2361;
	int days = 15;
	int k;
	string c, number, f, i, o;
public:
	void PrintoformlenieSAmer2() {
		setlocale(LC_ALL, "rus");
		ofstream klient10("Klient2SAmer.txt");
		system("cls");
		cout << "������: ����� �������" << endl << "��������� ���: Iguazu Falls and Patagonia" << endl; 	klient10 << "///////////////////////////////////////////////////////////" << endl << "������: ����� �������" << endl << "��������� ���: Iguazu Falls and Patagonia" << endl;
		cout << "�������� ���������� �������: " << endl;
		cin >> k; klient10 << "���������� �������: " << k << endl;
		cout << "�������� ��������� ����: " << price * k << " EUR" << endl;
		klient10 << "�������� ��������� ����: " << price * k << " EUR" << endl;
		cout << "������� ����������?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "������� ���� ����� ��������: " << endl;  cin >> number;
			klient10 << "����� ��������: " << number << endl;
			cout << "������� ���� �������: " << endl;	cin >> f;
			klient10 << "�������: " << f << endl;
			cout << "������� ���� ���: " << endl;	cin >> i;
			klient10 << "���: " << i << endl;
			cout << "������� ���� ��������: " << endl;	cin >> o;
			klient10 << "��������: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "������� �� ��� �����, � ��������� ����� ��� �������� ��� ��������, ������ �� �����!!!" << endl;
			klient10.close();

		}


	}

};


