#ifndef TRIEDA_H
#define TRIEDA_H
#include <string>

class Head
{
    private:
        int number;
        float smallerNumber;
        std::string word;
    public:
        Head();
        Head(int number, float smallerNumber, std::string word);
        void SetNumber(int number);
        int GetNumber();
        void SetSmallerNumber(float smallerNumber);
        float GetSmallerNumber();
        void SetWord(std::string word);
        std::string GetWord();
};

#endif