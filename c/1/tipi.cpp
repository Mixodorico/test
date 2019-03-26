#include <iostream>
#include <string>

using namespace std; 
namespace ns
{
    int intero = 1;
    string stringa = "stringa del nmespace 'ns'";
}
class Interna
{
private: int intero = 0;
private: float floating = 1.5947849847;
private: double doub = 2.5698488;
private:string stringa = "stringa std";
private: int vettore[3];

    public: void stampaTipi()
    {
        std::cout << "intero: " << intero << ", intero del namespace: " << ns:: intero << std::endl;
        std::cout << "floating: " << floating << std::endl;
        std::cout << "double: " << doub << std::endl;
        std::cout << "string: " << stringa << "," <<  std::endl << "stringa del namespace: " << ns::stringa << std::endl;
        std::cout << "sizeOf: " << sizeof(intero) << std::endl;
        std::cout << "dimensione vettore: " << sizeof(vettore)/sizeof(vettore[0]) << std::endl;
        for(int i = 0; i < sizeof(vettore)/sizeof(vettore[0]); i++)
        {
            std::cout << "vettore posizione " << i << ": " << vettore[i] << std::endl;
        }
    }
    
    public: void riempiVettore()
    {
            for(int i = 0; i < sizeof(vettore)/sizeof(vettore[0]); i++)
            {
                std::cout << "ciclo numero " << i << std::endl;
                vettore[i] = ns::intero++;
            }
    }
};

int main()
{
    Interna i;
    i.riempiVettore();
    i.stampaTipi();
    return 0;
}
