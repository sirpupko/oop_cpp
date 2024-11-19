#include "Class1.hpp"


Head::Head()
{
    number = 1;
    smallerNumber = 1.11;
    word = "one";
}

Head::Head(int number, float smallerNumber, std::string word)
{
    this -> number = number;
    this -> smallerNumber = smallerNumber;
    this -> word = word;
}

void Head::SetNumber(int number)
{
    this -> number = number;
}

int Head::GetNumber()
{
    return number;
}

void Head::SetSmallerNumber(float smallerNumber)
{
    this -> smallerNumber = smallerNumber;
}

float Head::GetSmallerNumber()
{
    return smallerNumber;
}

void Head::SetWord(std::string word)
{
    this -> word = word;
}

std::string Head::GetWord()
{
    return word;
}