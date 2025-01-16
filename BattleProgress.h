#pragma once

#include "BaseProgress.h"

class BattleProgress
	: private BaseProgress
{
public:
	BattleProgress();
	~BattleProgress() = default;

	void InputProgress() override;

	void BattlePrint() const;
};