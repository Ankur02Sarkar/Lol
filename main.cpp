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

// Q3 : Identify the ASCII Value of a Character
void getAscii(char c)
{
    int res = int(c);
    cout << "ASCII value of " << c << " is " << res;
}

// Q4 : Identify the Factorial of a Number
int getFactorial(int num)
{
    // if (num < 2)
    // {
    //     return 1;
    // }
    // int n = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     n = n * i;
    // }
    // return n;

    // Recursion Method
    if (num < 2)
    {
        return 1;
    }
    else
    {
        return num * getFactorial(num - 1);
    }
}

///////////////////////////////////////////////

int main()
{
    cout << getFactorial(7) << endl;
    return 0;
}