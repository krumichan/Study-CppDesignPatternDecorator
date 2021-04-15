#include "factor/Milk.h"
#include "factor/Whipping.h"

#include "coffee/HouseBlend.h"

#include <memory>

int main(void)
{
	using namespace std;

	Beverage* beverage = new HouseBlend();

	Beverage* decoMilk = new Milk(beverage, true);
	Beverage* decoWhipping = new Whipping(beverage, true);

	decoWhipping->GetInformation();

	Beverage* decoRemWhipping = new Whipping(beverage, false);

	decoRemWhipping->GetInformation();

	delete decoRemWhipping;
	delete decoWhipping;
	delete decoMilk;
	delete beverage;

	return 0;
}
