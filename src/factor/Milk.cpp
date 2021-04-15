#include "Milk.h"

/**
 * コンストラクタ
 * @param _bev 対象
 * @param _add 追加 / 削除
 */
Milk::Milk(Beverage* _bev, bool _add) : Decorator(_bev, "milk", _add)
{

}
