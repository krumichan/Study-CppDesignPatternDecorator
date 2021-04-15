#include "Whipping.h"

/**
 * コンストラクタ
 * @param _bev 対象
 * @param _add 追加 / 削除
 */
Whipping::Whipping(Beverage* _bev, bool _add) : Decorator(_bev, "Whipping", _add)
{

}
