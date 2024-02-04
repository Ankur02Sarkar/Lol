#include <iostream>
using namespace std;

// Q1 : Identify if a character is vowel or consonant
void identifyVowel(char c)
{
    char lowerCase = tolower(c);
    if (lowerCase == 'a' || lowerCase == 'e' || lowerCase == 'i' || lowerCase == 'o' || lowerCase == 'u')
    {
        cout << c << " is a Vowel";
    }
    else
    {
        cout << c << " is not a Vowel";
    }
}

// Q2 : Identify if a character is Alphabet or not
void identifyAlphabet(char c)
{
    if (isalpha(c))
    {
        cout << c << " is an Alphabet";
    }
    else
    {
        cout << c << " is not a Alphabet";
    }
}
int main()
{
    identifyAlphabet('2');
    return 0;
}