#include "printIntro.h"
#include <iostream>

void PrintIntroduction()
{
    std::cout << std::endl;
    std::cout << "88888888888 888                    8888888b.\n";
    std::cout << "    888     888                    888   Y88b\n";
    std::cout << "    888     888                    888    888\n";
    std::cout << "    888     88888b.   .d88b.       888   d88P  8888b.  88888b.   .d88b.   .d88b.  888d888\n";
    std::cout << "    888     888 *88b d8P  Y8b      8888888P*      *88b 888 *88b d88P*88b d8P  Y8b 888P*\n";
    std::cout << "    888     888  888 88888888      888 T88b   .d888888 888  888 888  888 88888888 888\n";
    std::cout << "    888     888  888 Y8b.          888  T88b  888  888 888  888 Y88b 888 Y8b.     888\n";
    std::cout << "    888     888  888  *Y8888       888   T88b *Y888888 888  888  *Y88888  *Y8888  888\n";
    std::cout << "                                                                     888             \n";
    std::cout << "                                                                Y8b d88P            \n";
    std::cout << "                                                                 *Y88P*         \n";

    std::cout << "Welcome to the land of the fallen Kings\n";
    std::cout << "After the great battle at the gates of Tuskania, the only work that has a decent pay are for those always on the road; hunting foul creatures that emerged from the depths\n";
    std::cout << "You came from a merchant family, but on these cursed lands there isn't much trade.\n";
    std::cout << "You are a hunter, a lone ranger that is on the trail to kill a mountain troll that has been spotted West from the small town of Nurn\n";
    std::cout << "You had no choice but to learn to survive on your own...\n\n";

    std::cout << "The gameplay is resolved by guessing the right numbers and dicerolls...\n";
    std::cout << "A D100 is rolled. A correct number guess adds 10 to the total. Skill points also add up to the dice roll. Good luck!\n";

    // std::cout << "Press any key to continue...\n\n";
    system("pause");
}