#include "Coffee.h"
#include <iostream>

/**
 * コンストラクタ
 */
Coffee::Coffee(string _name) : Beverage()
{
	this->name = _name;
}

/**
 * 情報の取得
 */
void Coffee::GetInformation()
{
	using namespace std;

	cout << this->name << endl;
	Beverage::GetInformation();
}
