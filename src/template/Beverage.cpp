#include "Beverage.h"

#include <algorithm>
#include <iostream>

using namespace std;

/**
 * コンストラクト
 */
Beverage::Beverage()
{
	this->cost = 0;
}

/**
 * デストラクタ
 */
Beverage::~Beverage()
{

}

/**
 * 要素追加
 * @param _factor 要素
 */
void Beverage::Add(string _factor)
{
	cout << "要素追加：" << _factor << endl;
	this->factors.push_back(_factor);
}

/**
 * 要素削除
 * @param _factor 要素
 */
void Beverage::Sub(string _factor)
{
	string msg = "存在しない要素：";

	auto it = std::find(factors.begin(), factors.end(), _factor);
	if (it != factors.end())
	{
		factors.erase(it);
		msg = "要素削除：";
	}

	cout << msg << _factor << endl;
}

/**
 * 値段を取得
 * @return 値段
 */
int Beverage::GetCost()
{
	return this->cost;
}

/**
 * 情報を取得
 */
void Beverage::GetInformation()
{
	for (string factor : factors)
	{
		cout << factor << endl;
	}
}
