#include "ManageProgress.h"

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    auto m = ManageProgress();
    m.InputProgresses();
    
    auto progressStates = m.GetProgressStates();
    
    try
    {
        auto progressTank = std::get<std::shared_ptr<TankProgress>>(progressStates["tank"]);
        progressTank->TankPrint();

        auto progressBattle = std::get<std::shared_ptr<BattleProgress>>(progressStates["battle"]);
        progressBattle->BattlePrint();
    }
    catch (const std::bad_variant_access& ex)
    {
        std::cout << ex.what() << '\n';
    }


}

