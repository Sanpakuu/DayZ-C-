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
		cout << "Регион: Европа" << endl << "Выбранный тур: Wonderful Latvia" << endl; 	klient <<  "///////////////////////////////////////////////////////////" << endl << "Регион: Европа" << endl << "Выбранный тур: Wonderful Latvia" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k  << " EUR" << endl; 
		klient << "Итоговая стоимость тура: " << price * k  << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number; 
			klient << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Европа" << endl << "Выбранный тур: Unforgettable Czech Republic" << endl; 	klient1 << "///////////////////////////////////////////////////////////" << endl << "Регион: Европа" << endl << "Выбранный тур: Unforgettable Czech Republic" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient1 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k  << " EUR" << endl;
		klient1 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient1 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient1 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient1 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient1 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
			cout << "Регион: Европа" << endl << "Выбранный тур: Graceful Carpathians" << endl; 	klient2 << "///////////////////////////////////////////////////////////" << endl << "Регион: Европа" << endl << "Выбранный тур: Graceful Carpathians" << endl;

			cout << "Выберите количество дней: " << endl;
			cin >> days; klient2 << "Количество дней: " << days << endl;
			cout << "Итоговая стоимость тура: " << price * k  << " EUR" << endl;
			klient2 << "Итоговая стоимость тура: " << price * k  << " EUR" << endl;
			cout << "Желаете продолжить?\t\t Y/N" << endl;
			cin >> c;
			if (c == "Y") {
				cout << "Введите свой номер телефона: " << endl;  cin >> number;
				klient2 << "Номер телефона: " << number << endl;
				cout << "Введите свою фамилию: " << endl;	cin >> f;
				klient2 << "Фамилия: " << f << endl;
				cout << "Введите свое имя: " << endl;	cin >> i;
				klient2 << "Имя: " << i << endl;
				cout << "Введите свое отчество: " << endl;	cin >> o;
				klient2 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
				cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Азия" << endl << "Выбранный тур: Night Thailand" << endl; 	klient3 << "///////////////////////////////////////////////////////////" << endl << "Регион: Азия" << endl << "Выбранный тур: Night Thailand" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient3 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient3 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient3 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient3 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient3 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient3 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Азия" << endl << "Выбранный тур: Inoccent Bali" << endl; 	klient4 << "///////////////////////////////////////////////////////////" << endl << "Регион: Азия" << endl << "Выбранный тур: Inoccent Bali" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient4 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient4 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient4 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient4 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient4 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient4 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Африка" << endl << "Выбранный тур: Sacrificial Egypt" << endl; 	klient5 << "///////////////////////////////////////////////////////////" << endl << "Регион: Африка" << endl << "Выбранный тур: Sacrificial Egypt" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient5 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient5 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient5 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient5 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient5 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient5 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Африка" << endl << "Выбранный тур: Great Egypt" << endl; 	klient6 << "///////////////////////////////////////////////////////////" << endl << "Регион: Африка" << endl << "Выбранный тур: Great Egypt" << endl;  
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient6 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient6 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient6 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient6 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient6 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient6 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Северная Америка" << endl << "Выбранный тур: Magnificent West" << endl; 	klient7 << "///////////////////////////////////////////////////////////" << endl << "Регион: Северная Америка" << endl << "Выбранный тур: Magnificent West" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient7 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient7 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient7 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient7 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient7 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient7 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Северная Америка" << endl << "Выбранный тур: Hot Mexico" << endl; 	klient8 << "///////////////////////////////////////////////////////////" << endl << "Регион: Северная Америка" << endl << "Выбранный тур: Hot Mexico" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient8 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient8 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient8 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient8 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient8 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient8 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Южная Америка" << endl << "Выбранный тур: The Magic of Machu Picchu" << endl; 	klient9 << "///////////////////////////////////////////////////////////" << endl << "Регион: Южная Америка" << endl << "Выбранный тур: The Magic of Machu Picchu" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient9 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient9 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient9 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient9 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient9 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient9 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
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
		cout << "Регион: Южная Америка" << endl << "Выбранный тур: Iguazu Falls and Patagonia" << endl; 	klient10 << "///////////////////////////////////////////////////////////" << endl << "Регион: Южная Америка" << endl << "Выбранный тур: Iguazu Falls and Patagonia" << endl;
		cout << "Выберите количество человек: " << endl;
		cin >> k; klient10 << "Количество человек: " << k << endl;
		cout << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		klient10 << "Итоговая стоимость тура: " << price * k << " EUR" << endl;
		cout << "Желаете продолжить?\t\t Y/N" << endl;
		cin >> c;
		if (c == "Y") {
			cout << "Введите свой номер телефона: " << endl;  cin >> number;
			klient10 << "Номер телефона: " << number << endl;
			cout << "Введите свою фамилию: " << endl;	cin >> f;
			klient10 << "Фамилия: " << f << endl;
			cout << "Введите свое имя: " << endl;	cin >> i;
			klient10 << "Имя: " << i << endl;
			cout << "Введите свое отчество: " << endl;	cin >> o;
			klient10 << "Отчество: " << o << endl << "///////////////////////////////////////////////////////////" << endl;
			cout << "Спасибо за ваш заказ, в ближайшее время вам позвонит наш менеджер, будьте на связи!!!" << endl;
			klient10.close();

		}


	}

};


