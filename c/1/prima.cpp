/* il primo commento in c++*/

#include <iostream>

// definiamo una classe interna

class Interna
{

    public: void stampa()
    {
        std::cout << "Chiamato?!" << std::endl;
    }
};

//entrty point
int main()
{
    Interna interna;
    interna.stampa();
    return 0;
}
