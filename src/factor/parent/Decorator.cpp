#include "Decorator.h"

/**
 * コンストラクタ
 * @param _name 要素名
 * @param _add 追加 / 削除
 */
Decorator::Decorator(Beverage* _bev, string _name, bool _add)
{
	this->component = _bev;

	//　追加
	if (_add)
	{
		this->component->Add(_name);
	}
	//　削除
	else
	{
		this->component->Sub(_name);
	}
}

/**
 * 情報の取得
 */
void Decorator::GetInformation()
{
	this->component->GetInformation();
}
