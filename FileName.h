#pragma once
#include <iostream>
#include <string>

using namespace std;


class Magazine {
	string name;
	string description;
	string tell;
	string email;
	int year;
public:

	Magazine(){}
	Magazine(string n, string d, string t, string e, int y);
	void Input();
	void Print();


	//void SetName(string n);
	//void SetDescription(string n);
	//void SetTell(string n);
	//void SetEmail(string n);
	//void SetYear(int y);


	//string GetName();
	//string GetDescription();
	//string GetTell();
	//string GetEmail();
	//int GetYear();

	

};

Magazine::Magazine(string n, string d, string t, string e, int y)
	{
	name = n;
	description = d;
	tell = t;
	email = e;
	year = y;

}

inline void Magazine::Input()
{
	cin >> name;
	cin >> description;
	cin >> tell;
	cin >> email;
	cin >> year;

}

inline void Magazine::Print()
{
	cout << name << "\t" << description << "\t" << tell << " \t" << email << "\t" << year << endl;

}
