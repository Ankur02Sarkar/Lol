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

// Q5 : Number of digits in an integer
int getDigitCount(int num)
{
    int posVal = abs(num);
    // string n = to_string(posVal);
    // return n.length();

    // Recursion Method
    if (posVal < 10)
    {
        return 1;
    }
    else
    {
        return 1 + getDigitCount(posVal / 10);
    }
}

// Q6 : Fibonacci series up to n

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    int prev = 0;
    int next = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = prev + next;
        prev = next;
        next = temp;
    }
    return next;

    // Recursion Method
    // if (n < 2)
    // {
    //     return n;
    // }
    // else
    // {
    //     return fibonacci(n - 1) + fibonacci(n - 2);
    // }
}

///////////////////////////////////////////////

int main()
{
    cout << fibonacci(70) << endl;
    return 0;
}