#pragma once

#include "BaseProgress.h"

class TankProgress
	: private BaseProgress
{
public:
	TankProgress();
	~TankProgress() = default;

	void InputProgress() override;

	void TankPrint() const;
};