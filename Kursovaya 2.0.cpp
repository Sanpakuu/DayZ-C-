#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include "Tours.h"
#include "oformlenie.h"
#include "Polzovatel.h"
#include <Windows.h>


using namespace std;
ifstream IP1("ETIList.txt");
ifstream IP2("AsIList.txt");
ifstream IP3("AfIList.txt");
ifstream IP4("NAmerList.txt");
ifstream IP5("SamerList.txt");
ifstream kl1("Klient1Eu.txt");
ifstream kl2("Klient2Eu.txt");
ifstream kl3("Klient3Eu.txt");
ifstream kl4("Klient1As.txt");
ifstream kl5("Klient2As.txt");
ifstream EIS("EnterInSystem.txt");
oformlenieEu1 ofo1;
oformlenieEu2 ofo2;
oformlenieEu3 ofo3;
oformlenieAs1 ofo4;
oformlenieAs2 ofo5;
oformlenieAf1 ofo6;
oformlenieAf2 ofo7;
oformlenieNAmer1 ofo8;
oformlenieNAmer2 ofo9;
oformlenieSAmer1 ofo10;
oformlenieSAmer2 ofo11;
Polzovatel test1;


int main()
{
	system("color 0D");
	setlocale(LC_ALL, "ru");
	int a, a1, a2, a3, a4, a5;
	int b, b1, b2, b3, b31, b32;
	int a21 = 0, a22 = 0, a23 = 0, a24 = 0, a25 = 0;
	string login, password;

	cout << "\t\t    ///////////////                                               /////////////////" << endl;
	cout << "\t\t    //            ///                                                         ///" << endl;
	cout << "\t\t    //              ///              //                                    ///" << endl;
	cout << "\t\t    //              ///     ///////////       ///      ///               /// " << endl;
	cout << "\t\t    //              ///    //        //       ///      ///             ///" << endl;
	cout << "\t\t    //              ///    //        //       ///      ///           ///" << endl;
	cout << "\t\t    //             ///     //        //       ///      ///         ///" << endl;
	cout << "\t\t    //           ///       //        //       ///      ///       ///" << endl;
	cout << "\t\t    //////////////         //////////////     ////////////     //////////////////" << endl;
	cout << "\t\t                                                       ///" << endl;
	cout << "\t\t                                                       ///" << endl;
	cout << "\t\t                                                       ///" << endl;
	cout << "\t\t                                                //////////" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "" << endl;
	cout << "" << endl;

	cout << "Введите логин и пароль: " << endl;
	cout << "Логин: ";
	cin >> login;
	cout << "Пароль: ";
	cin >> password;

/*ADMIIIIIIN*/
	if (login == "admin" && password == "admin") {
		do {
			cout << setw(62) << "1. История заказов" << endl << setw(61)<< "2. Редактирование" << endl << setw(55) << "3. Удаление" << endl << setw(52) << "0. Выход" << endl;
			cin >> b;
			while (b < 0 || b>3) {
				cout << "Ошибка доступа" << endl;
				cin >> b;
			}
			switch (b)
			{
/**/			case 1:cout << "История клиентов: " << endl;
				cout << "1. По Европе" << endl << "2. По Азии" << endl << "3. По Африке" << endl << "4. По Северной Америке" << endl << "5. По Южной Америке" << endl;
				cin >> b1;
				while (b1 < 0 || b1>5) {
					cout << "Введено недопустимое значение, повторите ввод" << endl;
					cin >> a3;
				}
				switch (b1)
				{
				case 1:system("cls"); {

					char buff[200]{};
					ifstream kl1("Klient1Eu.txt");
					for (int i = 0; i < 10; i++) {
						kl1.getline(buff, 200);
						cout << buff << endl;
					}
					kl1.close();

					char buff1[200]{};
					ifstream kl2("Klient2Eu.txt");
					for (int i = 0; i < 10; i++) {
						kl2.getline(buff1, 200);
						cout << buff1 << endl;
					}
					kl2.close();

					char buff2[200]{};
					ifstream kl3("Klient3Eu.txt");
					for (int i = 0; i < 10; i++) {
						kl3.getline(buff2, 200);
						cout << buff2 << endl;
					}
					kl3.close(); }

					  break;
				case 2:system("cls"); {
					char buff3[200]{};
					ifstream fin3("Klient1As.txt");
					for (int i = 0; i < 10; i++) {
						fin3.getline(buff3, 200);
						cout << buff3 << endl;
					}
					fin3.close();

					char buff4[200]{};
					ifstream fin4("Klient2As.txt");
					for (int i = 0; i < 10; i++) {
						fin4.getline(buff4, 200);
						cout << buff4 << endl;
					}
					fin4.close();
				}

					  break;
				case 3:system("cls"); {
					char buff5[200]{};
					ifstream fin5("Klient1Af.txt");
					for (int i = 0; i < 10; i++) {
						fin5.getline(buff5, 200);
						cout << buff5 << endl;
					}
					fin5.close();

					char buff6[200]{};
					ifstream fin6("Klient2Af.txt");
					for (int i = 0; i < 10; i++) {
						fin6.getline(buff6, 200);
						cout << buff6 << endl;
					}
					fin6.close();
				}

					  break;
				case 4:system("cls"); {
					char buff7[200]{};
					ifstream fin7("Klient1NAmer.txt");
					for (int i = 0; i < 10; i++) {
						fin7.getline(buff7, 200);
						cout << buff7 << endl;
					}
					fin7.close();

					char buff8[200]{};
					ifstream fin8("Klient2NAmer.txt");
					for (int i = 0; i < 10; i++) {
						fin8.getline(buff8, 200);
						cout << buff8 << endl;
					}
					fin8.close();
				}

					  break;
				case 5:system("cls"); {
					char buff9[200]{};
					ifstream fin9("Klient1SAmer.txt");
					for (int i = 0; i < 10; i++) {
						fin9.getline(buff9, 200);
						cout << buff9 << endl;
					}
					fin9.close();

					char buff10[200]{};
					ifstream fin10("Klient2SAmer.txt");
					for (int i = 0; i < 10; i++) {
						fin10.getline(buff10, 200);
						cout << buff10 << endl;
					}
					fin10.close();

				}

				}
				break;
/**/			case 2: cout << "Выберите редактируемый регион: " << endl;
				cout << "1. Европа" << endl << "2. Азия" << endl << "3. Африка" << endl << "4. Северная Америка" << endl << "5. Южная америка" << endl;
				cin >> b2;
				while (b2 < 0 || b2 >5) {
					cout << "Введено недопустимое значение, повторите ввод" << endl;
					cin >> b2;
				}
				switch (b2)
				{
				case 1:system("cls");
					cout << "Редактирование Европы" << endl;
					break;
				case 2:system("cls");
					cout << "Редактирование Азии" << endl;
					break;
				case 3:system("cls");
					cout << "Редактирование Африки" << endl;
					break;
				case 4:system("cls");
					cout << "Редактирование СА" << endl;
					break;
				case 5:system("cls");
					cout << "Редактирование ЮА" << endl;
					break;
				}
				break;
/**/			case 3: cout << "Выберите регион удаляемого клиента: " << endl;
				cout << "1. Европа" << endl << "2. Азия" << endl << "3. Африка" << endl << "4. Северная Америка" << endl << "5. Южная америка" << endl; 
				cin >> b3;
				while (b3 < 0 || b3 >5) {
					cout << "Введено недопустимое значение, повторите ввод" << endl;
					cin >> b3;
				}
				switch (b3)
				{
				case 1:system("cls");
					cout << "Удаление Клиента Европы" << endl;
					break;
				case 2:system("cls");
					cout << "Удаление Клиента Азии" << endl;
					break;
				case 3:system("cls");
					cout << "Удаление Клиента Африки" << endl;
					break;
				case 4:system("cls");
					cout << "Удаление Клиента СА" << endl;
					break;
				case 5:system("cls");
					cout << "Удаление Клиента ЮА" << endl;
					break;
				}
				break;
			}
		} while (b > 0 && b < 4);}

/*USEEEEEEER*/
	else {
		if (login == "user" && password == "user") {
			do {
				cout << setw(70) << "1. Информационная страница" << endl << setw(64) << "2. Оформление заказа" << endl << setw(52) << "0. Выход" << endl;
				cin >> a;
				while (a < 0 || a>3) {
					cout << "Ошибка доступа" << endl;
					cin >> a;
				}

				switch (a)
				{
				/***/case 1:
					cout << "1. Информация по турам Европы" << endl << "2. Информация по турам Азии" << endl << "3. Информация по турам Африки" << endl << "4. Информация по турам Сев. Америки" << endl << "5. Информация по турам Юж. Америки" << endl << "0. В меню" << endl;
					cin >> a1;
					while (a1 < 0 || a1>6) {
						cout << "Введено недопустимое значение, повторите ввод" << endl;
						cin >> a1;
					}
					switch (a1)
					{
					case 1:system("cls");
						cout << "Доступные туры Европы: " << endl;

						EuTInfo* ETList[1];

						for (int i = 0; i < 1; i++) {
							ETList[i] = new EuTInfo();
							ETList[i]->GetEurotoursTInfo(IP1);
							ETList[i]->PrintEurotoursTInfo();
						}
						IP1.seekg(0);

						break;
					case 2:system("cls");
						cout << "Доступные туры Азии:" << endl;

						AsTInfo* AsTList[1];

						for (int i = 0; i < 1; i++) {
							AsTList[i] = new AsTInfo();
							AsTList[i]->GetAsiantoursTInfo(IP2);
							AsTList[i]->PrintAsiantoursTInfo();
						}
						IP2.seekg(0);

						break;
					case 3:system("cls");
						cout << "Доступные туры Африки:" << endl;

						AfTInfo* AfTList[1];

						for (int i = 0; i < 1; i++) {
							AfTList[i] = new AfTInfo();
							AfTList[i]->GetAfricantoursTInfo(IP3);
							AfTList[i]->PrintAfricantoursTInfo();
						}
						IP3.seekg(0);

						break;
					case 4:system("cls");
						cout << "Доступные туры Сев. Америки:" << endl;

						NAmerTInfo* NAmerTList[1];

						for (int i = 0; i < 1; i++) {
							NAmerTList[i] = new NAmerTInfo();
							NAmerTList[i]->GetNAmertoursTInfo(IP4);
							NAmerTList[i]->PrintNAmertoursTInfo();
						}
						IP4.seekg(0);

						break;
					case 5:system("cls");
						cout << "Доступные туры Юж. Америки:" << endl;

						SAmerTInfo* SAmerTList[1];

						for (int i = 0; i < 1; i++) {
							SAmerTList[i] = new SAmerTInfo();
							SAmerTList[i]->GetSAmertoursTInfo(IP5);
							SAmerTList[i]->PrintSAmertoursTInfo();
						}
						IP5.seekg(0);

						break;
					case 0:system("cls");
						cout << " " << endl;
						break; system("cls");
					}
					break;

				/***/case 2:cout << "Выберите регион: " << endl;
					cout << "1. Европа" << endl << "2. Азия" << endl << "3. Африка" << endl << "4. Сев. Америка" << endl << "5. Юж. Америка" << endl << "0. В меню" << endl;
					cin >> a2;
					while (a2 < 0 || a2>5) {
						cout << "Введено недопустимое значение, повторите ввод" << endl;
						cin >> a2;
					}
					switch (a2)
					{
					case 1:system("cls");
						cout << "Регион: Европа" << endl << "1. Wonderful Latvia" << endl << "2. Unforgettable Czech Republic" << endl << "3. Graceful Carpathians" << endl;
						cin >> a21;
						while (a21 < 0 || a21>3) {
							cout << "Введено недопустимое значение, повторите ввод" << endl;
							cin >> a21;
						}
						switch (a21)
						{
						case 1: ofo1.PrintoformlenieEu1();
							break;
						case 2:ofo2.PrintoformlenieEu2();
							break;
						case 3:ofo3.PrintoformlenieEu3();
							break;
						}
						break;
					case 2:system("cls");
						cout << "Регион: Азия" << endl << " 1 .Night Thailand" << endl << "2. Innocent Bali" << endl;
						cin >> a22;
						while (a22 < 0 || a22>2) {
							cout << "Введено недопустимое значение, повторите ввод" << endl;
							cin >> a22;
						}
						switch (a22)
						{
						case 1:ofo4.PrintoformlenieAs1();
							break;
						case 2:ofo5.PrintoformlenieAs2();
							break;
						}
						break;
					case 3:system("cls");
						cout << "Регион: Африка" << endl << "1. Sacrificial Egypt" << endl << "2. Great Egypt" << endl;
						cin >> a23;
						while (a23 < 0 || a23>2) {
							cout << "Введено недопустимое значение, повторите ввод" << endl;
							cin >> a23;
						}
						switch (a23)
						{
						case 1:ofo6.PrintoformlenieAf1();
							break;
						case 2:ofo7.PrintoformlenieAf2();
							break;
						}
						break;
					case 4:system("cls");
						cout << "Регион: Сев. Америка" << endl << "1. Magnificent West" << endl << "2. Hot Mexico" << endl;
						cin >> a24;
						while (a24 < 0 || a24>2) {
							cout << "Введено недопустимое значение, повторите ввод" << endl;
							cin >> a24;
						}
						switch (a24)
						{
						case 1:ofo8.PrintoformlenieNAmer1();
							break;
						case 2:ofo9.PrintoformlenieNAmer2();
							break;
						}
						break;
					case 5:system("cls");
						cout << "Регион: Юж. Америка" << endl << "1. The Magic of Machu Picchu" << endl << "2. Iguazu Falls and Patagonia" << endl;
						cin >> a25;
						while (a25 < 0 || a25>2) {
							cout << "Введено недопустимое значение, повторите ввод" << endl;
							cin >> a25;
						}
						switch (a25)
						{
						case 1:ofo10.PrintoformlenieSAmer1();
							break;
						case 2:ofo11.PrintoformlenieSAmer2();
							break;
						}
						break;
					case 0:cout << " " << endl;
						break; system("cls");
					}
					break;

					/***/
				}

			} while (a > 0 && a < 3);
		}
		else {
		if (login == "user" && password != "user" || login == "admin" && password != "admin") {
			cout << "Введенные пароль не правильный, попробуйте ввести пароль еще раз.(для безопасности программа будет закрыта)" << endl;
		}
		else
		{ if (login != "user" && password == "user" || login != "admin" && password == "admin") {
				cout << "Введенные логин не правильный, попробуйте ввести логин еще раз.(для безопасности программа будет закрыта)" << endl;
			
		} 
		else { if (login != "user" && password != "user" || login != "admin" && password != "admin") { cout << "Такого аккаунта не существует в базе" << endl; } }
		}
			}
	}
	
	
	
		system("pause");
		return 0;
}