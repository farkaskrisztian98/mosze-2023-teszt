#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; // NELEMENTS helyett N_ELEMENTS 
    std::cout << "1-100 ertekek duplazasa" << std::endl; // Hiányzott az << std::endl, és a kettőspont hibás
    for (int i = 0; i < N_ELEMENTS; i++) // Hiányzott a < N_ELEMENTS, i++ hibás
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // Igaznak kell lennie, i++ hibás 
    {
        std::cout << "Ertek: " << b[i] << std::endl; // A hibás szövegezést és a hiányzó << std::endl-t hozzáadtam
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // A változónak inicializálva kell lennie
    for (int i = 0; i < N_ELEMENTS; i++) // Pontosvesszőt kell használni és i++ hibás 
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
    std::cout << "Ez egy program" << std:endl;
}