#pragma once
#include "Class1.hpp"

class Neck : public Head
{
    private:
        char character;
    public:
        Neck(int number, float smallerNumber, std::string word, char character);
        void SetCharacter(char character);
        char GetCharacter();
};