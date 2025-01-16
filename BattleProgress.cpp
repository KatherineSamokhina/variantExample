#include "BattleProgress.h"

BattleProgress::BattleProgress()
{
	SetProgressType(SBaseProgress::eType::Battle);
}

void BattleProgress::InputProgress()
{
	std::cout << "BattleProgress InputProgress func is calling" << std::endl;
}

void BattleProgress::BattlePrint() const
{
	std::cout << "BattleProgress BattlePrint func is calling" << std::endl;
}
