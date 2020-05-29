#include <iostream>
#include <ctime>
// #include "printIntro.h"


using namespace std;

class Ranger
{
    public:
        string Name;
        int SkillPoints;
        int Health, RangeWeapon, MeleeWeapon;
        //Skills
        int Strength, Agility, Perception, Intelligence;


void print(string text)
{
    std::cout << text;
}

void PrintIntroduction()
{
    std::cout << std::endl;
    print("88888888888 888                    8888888b.\n");
    print("    888     888                    888   Y88b\n");
    print("    888     888                    888    888\n");
    print("    888     88888b.   .d88b.       888   d88P  8888b.  88888b.   .d88b.   .d88b.  888d888\n");
    print("    888     888 *88b d8P  Y8b      8888888P*      *88b 888 *88b d88P*88b d8P  Y8b 888P*\n");
    print("    888     888  888 88888888      888 T88b   .d888888 888  888 888  888 88888888 888\n");
    print("    888     888  888 Y8b.          888  T88b  888  888 888  888 Y88b 888 Y8b.     888\n");
    print("    888     888  888  *Y8888       888   T88b *Y888888 888  888  *Y88888  *Y8888  888\n");
    print("                                                                     888             \n");
    print("                                                                Y8b d88P            \n");
    print("                                                                 *Y88P*         \n");

    print("Welcome to the land of the fallen Kings\n");
    print("After the great battle at the gates of Tuskania, the only work that has a decent pay are for those always on the road; hunting foul creatures that emerged from the depths\n");
    print("You came from a merchant family, but on these cursed lands there isn't much trade.\n");
    print("You are a hunter, a lone ranger that is on the trail to kill a mountain troll that has been spotted West from the small town of Nurn\n");
    print("You had no choice but to learn to survive on your own...\n\n");

    print("The gameplay is resolved by guessing the right numbers and dicerolls...\n");
    print("A D100 is rolled. A correct number guess adds 10 to the total. Skill points also add up to the dice roll. Good luck!\n");

    // std::cout << "Press any key to continue...\n\n";
    system("pause");
}

void CharacterCreation()
{
    string Name="";
    bool ContinueChar=false;
    int YesNo=0;
    int SkillPoints=10;
    int Strength=0; 
    int Agility=0; 
    int Perception=0;
    int Intelligence=0;
    int skill=0;
    std::cout << "\nWelcome to the character creation!\n";
    
    while(ContinueChar != true){
        std::cout << "Enter your name: \n";
        std::cin >> Name;
        std::cout << "Your name is: \n" << Name << "\n";
        std::cout << "The type is: " << typeid(Name).name() << "\n";
        while(YesNo!=1 || YesNo !=2){
            std::cout << "You are: " << Name << " ?\n";
            std::cout << "1. Yes\n";
            std::cout << "2. No\n";
            std::cin >> YesNo;
            if(YesNo==1){
                ContinueChar=true;
                break;
            } else if (YesNo==2){
                break;
            }

        }
    }
    ContinueChar=false;
    YesNo=0;
    while(ContinueChar != true){
        std::cout << "You have: " << SkillPoints << " remaining\n";
        std::cout << "Strength: (" << Strength << ")    Agility: (" << Agility << ")    Perception: (" << Perception << ")  Intelligence: (" << Intelligence <<")\n";
        std::cout << "1. To add a point to Strength\n";
        std::cout << "2. To add a point to Agility\n";
        std::cout << "3. To add a point to Perception\n";
        std::cout << "4. To add a point to Intelligence\n";
        std::cout << "5. To remove a point to Strength\n";
        std::cout << "6. To remove a point to Agility\n";
        std::cout << "7. To remove a point to Perception\n";
        std::cout << "8. To remove a point to Intelligence\n";
        std::cout << "9. You picked your skills and you're ready to go hunt\n";
        std::cin >> skill;

        switch (skill){
            case 1:
                if(SkillPoints>0 && Strength<=10){
                Strength++;
                SkillPoints--;
                } else {
                    std::cout << "\nOut of SkillPoints\n";
                }
                break;
            case 2:
                if(SkillPoints>0 && Agility<=10){
                Agility++;
                SkillPoints--;
                } else {
                    std::cout << "\nOut of SkillPoints\n";
                }
                break;
            case 3:
                if(SkillPoints>0 && Perception<=10){
                Perception++;
                SkillPoints--;
                } else {
                    std::cout << "\nOut of SkillPoints\n";
                }
                break;
            case 4:
                if(SkillPoints>0 && Intelligence<=10){
                Intelligence++;
                SkillPoints--;
                } else {
                    std::cout << "\nOut of SkillPoints\n";
                }
                break;
            case 5:
                if(SkillPoints<10 && Strength>0){
                Strength--;
                SkillPoints++;
                } else {
                    std::cout << "\nMax unsused SkillPoints\n";
                }
                break;
            case 6:
                if(SkillPoints<10 && Agility>0){
                Agility--;
                SkillPoints++;
                } else {
                    std::cout << "\nMax unsused SkillPoints\n";
                }
                break;
            case 7:
                if(SkillPoints<10 && Perception>0){
                Perception--;
                SkillPoints++;
                } else {
                    std::cout << "\nMax unsused SkillPoints\n";
                }
                break;
            case 8:
                if(SkillPoints<10 && Intelligence>0){
                Intelligence--;
                SkillPoints++;
                } else {
                    std::cout << "Max unsused SkillPoints\n";
                }
                break;
            case 9:
                ContinueChar=true;
                break;
            default:
                break;
        }

        if(ContinueChar==true){
            std::cout << "Are you sure? There is no turning back!\n";
            std::cout << "1. Yes\n";
            std::cout << "2. No\n";
            std::cin >> YesNo;
            if(YesNo==2){
                ContinueChar=false;
            }
        }
    }
    std::cout << "You are: " << Name << " ?\n";

    // Ranger player;
}

bool GuessNumber(int Difficulty)
{
    //Declaring variables
    const int NumberB = rand() % Difficulty+ Difficulty;
    const int NumberC = rand() % Difficulty+ Difficulty;
    const int NumberA = rand() % Difficulty+ Difficulty;

    int NumberSum = NumberA+NumberB+NumberC;
    int NumberProduct = NumberA*NumberB*NumberC;

    print("+ There are 3 numbers to roll\n"); 
    std::cout << "+ The sum adds up to: " << NumberSum << std::endl;
    std::cout << "+ The product of the numbers is: " << NumberProduct << std::endl;

    int Guess1, Guess2, Guess3;
    print("Enter you guess: \n");
    std::cin >> Guess1 >> Guess2 >> Guess3;
    std::cout << "\nYou entered: " << Guess1 << ", " << Guess2 << ", " << Guess3 << std::endl;

    int GuessSum = Guess1 + Guess2 + Guess3;
    int GuessProduct = Guess1 * Guess2 * Guess3;

    //Check if the guess is correct
    if(NumberSum == GuessSum && NumberProduct == GuessProduct)
    {
        print("\nYou successfully gained a bonus!\n");
        return true;
    } else 
    {
        print("\nYou lost... Hopefully you are lucky...\n");
        return false;
    }
}

int DiceRoll()
{
    return rand() % 100 + 1;
}

void Decision1() // Choose between the bow and crossbow
{
    int choice = 0 ;
    print("1. Bow \n2. Crossbow\n");
    while(choice < 1 || choice >2)
    {
        std::cin >> choice;
    }

}

bool StoryProgression(int CurrentLevel)
{
    bool LevelStatus;
    int Dice;
    if(CurrentLevel == 1)
    {
        print("You have left the town and entered the forest. You arrive where the monster was spotted last. You jump off your horse and you grab your:\n");
        Decision1();
        print(" You use perception to spot the tracks...");
        LevelStatus = GuessNumber(CurrentLevel);
        Dice = DiceRoll();
        std::cout << "You roll the dice and score a: " << Dice << std::endl;
        return true;
    }
}

bool PlayGame(int Difficulty) 
{
    print("\n---\n");
    print("---\n");
    print("---\n");
    print("\nThe current level is: ");
    std::cout << Difficulty << std::endl;

    //Story
    return StoryProgression(Difficulty);
}

int main()
{
    //Introduction
    int c = 10;
    if(typeid(c)==typeid(int)){
        print("\nInt type is int\n");
    } else {
        print("Does not go in int\n");
    }
    std::cout << typeid(c).name() << endl;
    PrintIntroduction();

    // CharacterCreation();



    // srand(time(NULL));

    int LevelDifficulty = 1;
    int const MaxLevel = 4;

    // while (LevelDifficulty <= MaxLevel)
    // {
    //     bool bLevelComplete = PlayGame(LevelDifficulty);
    //     std::cin.clear();
    //     std::cin.ignore();

    //     if (bLevelComplete)
    //     {
    //         LevelDifficulty++;
    //     }
        
    // }
    //use correct numbers to progress through the game. example successfully got the number therefore the trail is found. or surprised the troll...
    print("Congratualations! You have slain the troll. You took its head as trophy and head back to town for a well deserved round of mead.\n");
    print("Making sure compile works\n");
    print("Making sure compile a second time works\n");

    return 0;
}
