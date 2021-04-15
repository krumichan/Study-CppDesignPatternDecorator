#pragma once

#include "../../template/Beverage.h"

class Decorator : public Beverage
{
protected:
	/**
	 * コンストラクタ
	 * @param 要素名
	 * @param 追加 / 削除
	 */
	Decorator(Beverage*, string, bool);

	/**
	 * 情報を取得
	 */
	void GetInformation() override;

private:
	/**
	 * 主体
	 */
	Beverage* component;
};
