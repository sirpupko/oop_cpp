#include <iostream>
#include "Class1.hpp"
#include "CLass2.hpp"

int main()
{

    Head math1(5, 1.33, "three");
    Neck math2(6, 3.14, "two", '%');

    std::cout << math1.GetNumber() << '\n';
    std::cout << math1.GetSmallerNumber() << '\n';
    std::cout << math1.GetWord() << '\n';
    std::cout << math2.GetNumber() << '\n';
    std::cout << math2.GetSmallerNumber() << '\n';
    std::cout << math2.GetWord() << '\n';
    std::cout << math2.GetCharacter() << '\n';

}