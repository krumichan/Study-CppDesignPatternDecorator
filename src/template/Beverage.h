#pragma once

#include <vector>
#include <string>

using namespace std;

/**
 * 飲み物の基底クラス
 */
class Beverage
{
protected:
	/**
	 * コンストラクタ
	 */
	Beverage();

public:
	/**
	 * デストラクタ
	 */
	virtual ~Beverage();

public:
	/**
	 * 要素追加
	 */
	void Add(string);

	/**
	 * 要素削除
	 */
	void Sub(string);

	/**
	 * 値段を取得
	 * @return 値段
	 */
	int GetCost();

	/**
	 * 情報を取得
	 */
	virtual void GetInformation();

protected:
	/**
	 * 飲み物の値段
	 */
	int cost;

	/**
	 * 要素
	 */
	vector<string> factors;
};
