#pragma once

#include "../../template/Beverage.h"

/**
 * コーヒーの基底クラス
 */
class Coffee : public Beverage
{
protected:
	/**
	 * コンストラクタ
	 */
	Coffee(string);

public:
	/**
	 * 情報を取得
	 */
	void GetInformation() override;

private:
	/**
	 * コーヒー名
	 */
	string name;
};
