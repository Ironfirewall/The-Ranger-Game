#include <iostream>
#include <ctime>

class Ranger
{
    private:
        std::string Name;
        int SkillPoints;
        int Health;
        int Weapon = 0;
        int Strength = 0;
        int Agility = 0;
        int Perception = 0;
        int Intelligence = 0;
    public:
        std::string GetName(){return Name;}
        void SetName(std::string Name){this->Name = Name;}
        int GetHealth(){return Health;}
        int GetWeapon(){return Weapon;}
        void SetWeapon(int Weapon){this->Weapon = Weapon;}
        int GetStrength(){return Strength;}
        void SetStrength(int Strength){this->Strength = Strength;}
        int GetAgility(){return Agility;}
        void SetAgility(int Agility){this->Agility = Agility;}
        int GetPerception(){return Perception;}
        void SetPerception(int Perception){this->Perception = Perception;}
        int GetIntelligence(){return Intelligence;}
        void SetIntelligence(int Intelligence){this->Intelligence = Intelligence;}

};

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

void CharacterCreation()
{
    std::cout << "Welcome to the character creation!\n";
    std::cout << "Welcome to the character creation!\n";
}

bool GuessNumber(int Difficulty)
{
    //Declaring variables
    const int NumberB = rand() % Difficulty+ Difficulty;
    const int NumberC = rand() % Difficulty+ Difficulty;
    const int NumberA = rand() % Difficulty+ Difficulty;

    int NumberSum = NumberA+NumberB+NumberC;
    int NumberProduct = NumberA*NumberB*NumberC;

    std::cout << "+ There are 3 numbers to roll\n"; 
    std::cout << "+ The sum adds up to: " << NumberSum << std::endl;
    std::cout << "+ The product of the numbers is: " << NumberProduct << std::endl;

    int Guess1, Guess2, Guess3;
    std::cout << "Enter you guess: \n";
    std::cin >> Guess1 >> Guess2 >> Guess3;
    std::cout << "\nYou entered: " << Guess1 << ", " << Guess2 << ", " << Guess3 << std::endl;

    int GuessSum = Guess1 + Guess2 + Guess3;
    int GuessProduct = Guess1 * Guess2 * Guess3;

    //Check if the guess is correct
    if(NumberSum == GuessSum && NumberProduct == GuessProduct)
    {
        std::cout << "\nYou successfully gained a bonus!\n";
        return true;
    } else 
    {
        std::cout << "\nYou lost... Hopefully you are lucky...\n";
        return false;
    }
}

int DiceRoll()
{
    return rand() % 100 + 1;
}

bool StoryProgression(int CurrentLevel)
{
    bool LevelStatus;
    if(CurrentLevel == 1)
    {
        std::cout << "You have left the town and entered the forest. You arrive where the monster was spotted last. You use perception to spot the tracks...";
        LevelStatus = GuessNumber(CurrentLevel);
        std::cout << "You roll the dice and score a: " << DiceRoll() << std::endl;
        return true;
    }
}

bool PlayGame(int Difficulty) 
{
    std::cout << "\n---\n";
    std::cout << "---\n";
    std::cout << "---\n";
    std::cout << "\nThe current level is: " << Difficulty << std::endl;
    //Story
    return StoryProgression(Difficulty);
}

int main()
{

        //Introduction
    PrintIntroduction();

    srand(time(NULL));

    int LevelDifficulty = 1;
    int const MaxLevel = 4;

    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
        
    }
    //use correct numbers to progress through the game. example successfully got the number therefore the trail is found. or surprised the troll...
    std::cout << "Congratualations! You have slain the troll. You took its head as trophy and head back to town for a well deserved round of mead.";

    return 0;
}
