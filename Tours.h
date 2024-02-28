#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include <fstream>


using namespace std;

class EuTInfo
{
private:
	string name, name1, name2;
	string map, map1, map2;
	string duration, duration1, duration2;
	string way, way1, way2;
	string price, price1, price2;

public:
	void GetEurotoursTInfo(ifstream& object) {
		char charbuff[200];
		object.getline(charbuff, 200);
		this->name = charbuff;
		object.getline(charbuff, 200);
		this->map = charbuff;
		object.getline(charbuff, 200);
		this->duration = charbuff;
		object.getline(charbuff, 200);
		this->way = charbuff;
		object.getline(charbuff, 200);
		this->price = charbuff;
		object.getline(charbuff, 200);
		this->name1 = charbuff;
		object.getline(charbuff, 200);
		this->map1 = charbuff;
		object.getline(charbuff, 200);
		this->duration1 = charbuff;
		object.getline(charbuff, 200);
		this->way1 = charbuff;
		object.getline(charbuff, 200);
		this->price1 = charbuff;
		object.getline(charbuff, 200);
		this->name2 = charbuff;
		object.getline(charbuff, 200);
		this->map2 = charbuff;
		object.getline(charbuff, 200);
		this->duration2 = charbuff;
		object.getline(charbuff, 200);
		this->way2 = charbuff;
		object.getline(charbuff, 200);
		this->price2 = charbuff;
		
	}

	void PrintEurotoursTInfo() {
		cout << "\t Название тура:  " << name << endl << "\t Расположение тура: " << map << endl << "\t Длительность тура: " << duration << endl << "\t Путь: " << way << endl << "\t Цена тура: " << price << endl << endl;
		cout << "\t Название тура:  " << name1 << endl << "\t Расположение тура: " << map1 << endl << "\t Длительность тура: " << duration1 << endl << "\t Путь: " << way1 << endl << "\t Цена тура: " << price1 << endl << endl;
		cout << "\t Название тура:  " << name2 << endl << "\t Расположение тура: " << map2 << endl << "\t Длительность тура: " << duration2 << endl << "\t Путь: " << way2 << endl << "\t Цена тура: " << price2 << endl << endl;
		cout << endl << endl;
	}
};

class AsTInfo
{
private:
	string name, name1;
	string map, map1;
	string duration, duration1;
	string way, way1;
	string price, price1;

public:
	void GetAsiantoursTInfo(ifstream& object) {
		char charbuff[50];
		object.getline(charbuff, 50);
		this->name = charbuff;
		object.getline(charbuff, 50);
		this->map = charbuff;
		object.getline(charbuff, 50);
		this->duration = charbuff;
		object.getline(charbuff, 50);
		this->way = charbuff;
		object.getline(charbuff, 50);
		this->price = charbuff;
		object.getline(charbuff, 50);
		this->name1 = charbuff;
		object.getline(charbuff, 50);
		this->map1 = charbuff;
		object.getline(charbuff, 50);
		this->duration1 = charbuff;
		object.getline(charbuff, 50);
		this->way1 = charbuff;
		object.getline(charbuff, 50);
		this->price1 = charbuff;
	}

	void PrintAsiantoursTInfo() {
		cout << "\t Название тура:  " << name << endl << "\t Расположение тура: " << map << endl << "\t Длительность тура: " << duration << endl << "\t Путь: " << way << endl << "\t Цена тура: " << price << endl << endl;
		cout << "\t Название тура:  " << name1 << endl << "\t Расположение тура: " << map1 << endl << "\t Длительность тура: " << duration1 << endl << "\t Путь: " << way1 << endl << "\t Цена тура: " << price1 << endl << endl;
		cout << endl << endl;
	}
};

class AfTInfo
{
private:
	string name, name1;
	string map, map1;
	string duration, duration1;
	string way, way1;
	string price, price1;

public:
	void GetAfricantoursTInfo(ifstream& object) {
		char charbuff[50];
		object.getline(charbuff, 50);
		this->name = charbuff;
		object.getline(charbuff, 50);
		this->map = charbuff;
		object.getline(charbuff, 50);
		this->duration = charbuff;
		object.getline(charbuff, 50);
		this->way = charbuff;
		object.getline(charbuff, 50);
		this->price = charbuff;
		object.getline(charbuff, 50);
		this->name1 = charbuff;
		object.getline(charbuff, 50);
		this->map1 = charbuff;
		object.getline(charbuff, 50);
		this->duration1 = charbuff;
		object.getline(charbuff, 50);
		this->way1 = charbuff;
		object.getline(charbuff, 50);
		this->price1 = charbuff;
	}

	void PrintAfricantoursTInfo() {
		cout << "\t Название тура:  " << name << endl << "\t Расположение тура: " << map << endl << "\t Длительность тура: " << duration << endl << "\t Путь: " << way << endl << "\t Цена тура: " << price << endl << endl;
		cout << "\t Название тура:  " << name1 << endl << "\t Расположение тура: " << map1 << endl << "\t Длительность тура: " << duration1 << endl << "\t Путь: " << way << endl << "\t Цена тура: " << price1 << endl << endl;
		cout << endl << endl;
	}
};

class NAmerTInfo
{
private:
	string name, name1;
	string map, map1;
	string duration, duration1;
	string way, way1;
	string price, price1;

public:
	void GetNAmertoursTInfo(ifstream& object) {
		char charbuff[200];
		object.getline(charbuff, 200);
		this->name = charbuff;
		object.getline(charbuff, 200);
		this->map = charbuff;
		object.getline(charbuff, 200);
		this->duration = charbuff;
		object.getline(charbuff, 200);
		this->way = charbuff;
		object.getline(charbuff, 200);
		this->price = charbuff;
		object.getline(charbuff, 200);
		this->name1 = charbuff;
		object.getline(charbuff, 200);
		this->map1 = charbuff;
		object.getline(charbuff, 200);
		this->duration1 = charbuff;
		object.getline(charbuff, 200);
		this->way1 = charbuff;
		object.getline(charbuff, 200);
		this->price1 = charbuff;

	}

	void PrintNAmertoursTInfo() {
		cout << "\t Название тура:  " << name << endl << "\t Расположение тура: " << map << endl << "\t Длительность тура: " << duration << endl << "\t Путь: " << way << endl << "\t Цена тура: " << price << endl << endl;
		cout << "\t Название тура:  " << name1 << endl << "\t Расположение тура: " << map1 << endl << "\t Длительность тура: " << duration1 << endl << "\t Путь: " << way1 << endl << "\t Цена тура: " << price1 << endl << endl;
		cout << endl << endl;
	}
};

class SAmerTInfo
{
private:
	string name, name1;
	string map, map1;
	string duration, duration1;
	string way, way1;
	string price, price1;

public:
	void GetSAmertoursTInfo(ifstream& object) {
		char charbuff[200];
		object.getline(charbuff, 200);
		this->name = charbuff;
		object.getline(charbuff, 200);
		this->map = charbuff;
		object.getline(charbuff, 200);
		this->duration = charbuff;
		object.getline(charbuff, 200);
		this->way = charbuff;
		object.getline(charbuff, 200);
		this->price = charbuff;
		object.getline(charbuff, 200);
		this->name1 = charbuff;
		object.getline(charbuff, 200);
		this->map1 = charbuff;
		object.getline(charbuff, 200);
		this->duration1 = charbuff;
		object.getline(charbuff, 200);
		this->way1 = charbuff;
		object.getline(charbuff, 200);
		this->price1 = charbuff;
	}

	void PrintSAmertoursTInfo() {
		cout << "\t Название тура:  " << name << endl << "\t Расположение тура: " << map << endl << "\t Длительность тура: " << duration << endl << "\t Путь: " << way << endl << "\t Цена тура: " << price << endl << endl;
		cout << "\t Название тура:  " << name1 << endl << "\t Расположение тура: " << map1 << endl << "\t Длительность тура: " << duration1 << endl << "\t Путь: " << way1 << endl << "\t Цена тура: " << price1 << endl << endl;
		cout << endl << endl;
	}
};