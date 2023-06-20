#include <iostream>
#include <cstdlib>
#include <ctime>

class randomNum
{
public:
    int randMethod()
    {
        srand(time(0));
        int randNum = rand() % 100 + 1;
        return randNum;
    }
};

int main()
{
    int tries = 0;
    int guessAux;

    randomNum randObj;
    int randomAux = randObj.randMethod();

    std::cout << "\n-------------------------------------------------------------------------------------------------------\n";
    std::cout << " Rules: You will have 10 chances to guess a randomly generated number, which will be between 1 and 100.\n";
    std::cout << "-------------------------------------------------------------------------------------------------------\n";

    do
    {
        std::cout << "\nTake a guess:\n";
        std::cin >> guessAux;

        if (guessAux > randomAux)
        {
            std::cout << "\nYour guess is higher than the generated number.\n";
        }
        else if (guessAux < randomAux)
        {
            std::cout << "\nYour guess is lower than the generated number.\n";
        }
        else
        {
            std::cout << "\nCongratulations, you got it right!!!\n";
            break;
        }

        tries++;

    } while (tries < 10);

    std::cout << "\nYou've run out of attempts, please try again!\n";

    return 0;
}