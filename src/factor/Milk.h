#pragma once

#include "parent/Decorator.h"

class Milk : public Decorator
{
public:
	/**
	 * コンストラクタ
	 * @param 対象
	 * @param 追加 / 削除
	 */
	Milk(Beverage*, bool);
};
