#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include "Esterna.h"
#include "AltraClasse.h"

using namespace std;

int main()
{
    Esterna ext;
    AltraClasse altra("ci", "ao");
    
    std::cout << "Insert an integer number:" << std::endl;
    string stringaIN;
    getline(cin,stringaIN);
    
    int n = std::stoi(stringaIN);
    std::cout << "valore: " << ext.getIntero(n) << std::endl;
    
    std::cout << "La concatenazione: " << altra.concatenaStringhe() << std::endl;
    
    return 0;
}
