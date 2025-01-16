#include "TankProgress.h"

TankProgress::TankProgress()
{
	SetProgressType(SBaseProgress::eType::Tank);
}

void TankProgress::InputProgress()
{
	std::cout << "TankProgress InputProgress func is calling" << std::endl;
}

void TankProgress::TankPrint() const
{
	std::cout << "TankProgress TankPrint func is calling" << std::endl;
}
