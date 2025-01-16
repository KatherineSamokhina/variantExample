#include "ManageProgress.h"

ManageProgress::ManageProgress()
{
	progressStates.insert({ "tank", ProgressVariant(std::make_shared<TankProgress>(TankProgress()))});
	progressStates.insert({ "battle", ProgressVariant(std::make_shared<BattleProgress>(BattleProgress()))});
}

void ManageProgress::InputProgresses()
{
	auto caller = [](const auto& obj) {obj->InputProgress(); };
	for (auto& [ _ ,progress] : progressStates)
	{
		std::visit(caller, progress);
	}
}

const std::map<std::string, ManageProgress::ProgressVariant>& ManageProgress::GetProgressStates() const
{
	return progressStates;
}
