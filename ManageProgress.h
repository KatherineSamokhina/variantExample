#pragma once

#include "BattleProgress.h"
#include "TankProgress.h"

#include <map>
#include <memory>
#include <string>
#include <variant>

class ManageProgress
{
public:
	using ProgressVariant = std::variant<std::shared_ptr<TankProgress>, std::shared_ptr<BattleProgress>>;

	ManageProgress();

	void InputProgresses();

	const std::map<std::string, ProgressVariant>& GetProgressStates() const;
private:
	std::map<std::string, ProgressVariant> progressStates;
};