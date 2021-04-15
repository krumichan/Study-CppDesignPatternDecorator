#pragma once

#include "parent/Decorator.h"

class Whipping : public Decorator
{
public:
	/**
	 * コンストラクタ
	 * @param 対象
	 * @param 追加 / 削除
	 */
	Whipping(Beverage*, bool);
};
