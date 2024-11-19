#include "Class2.hpp"

Neck::Neck(int number, float smallerNumber, std::string word, char character)
    : Head(number, smallerNumber, word)
{
    this -> character = character;
}
void Neck::SetCharacter(char character)
{
    this -> character = character;
}
char Neck::GetCharacter()
{
    return character;
}