#include <iostream>
#include <vector>
using namespace std;

/*
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

// Q7 : identify of the a number is positive or negative
int posNeg(int n)
{
    return n > 0;
}

// Q8 : identify of the a number is even or odd
int evenOdd(int n)
{
    return n % 2 == 0;
}

// Q9 : Area Of Circle
int areaCircle(int side)
{
    return 22.0 / 7 * side * side;
}

// Q10 : Area Of Rectangle
int areaRectangle(int length, int breath)
{
    return length * breath;
}

// Q11 : Area Of Triangle
int areaTriangle(int base, int height)
{
    return base * height / 2;
}

// Q12 : Sum of digits of a Num
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

// Q13 : Sum of N Natural Numbers
int sumOfNaturalNums(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// Q14 : Sum of Nums in a Given Range
int sumOfRangedNums(int lowerLimit, int upperLimit)
{
    int sum = 0;
    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// Q15 : Reverse a Number
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }
    return rev;
}

// Q16 : LCM of two Numbers
int lcm(int a, int b)
{
    int temp = a;
    while (b > 0)
    {
        int rem = temp % b;
        temp = b;
        b = rem;
    }
    return temp;
}

// Q17 : Check if Number is STRONG Number or Not
// Strong number is a special number whose sum of the factorial of digits is equal to the original number
int getFactorial(int num)
{
    if (num < 2)
    {
        return 1;
    }
    int n = 1;
    for (int i = 1; i <= num; i++)
    {
        n = n * i;
    }
    return n;
}

int isStrong(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + getFactorial(rem);
        n = n / 10;
    }
    return sum == temp;
}

// Q18 : Perfect Number
// if sum of digits is equal to number
int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}

// Q19 : Find Power of a Number
int powerOf(int num, int pow)
{
    int res = 1;
    if (pow == 0)
    {
        return 1;
    }
    for (int i = 0; i < pow; i++)
    {
        res = res * num;
    }
    return res;

    // Recursion Method
    // if (pow == 0)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return num * powerOf(num, pow - 1);
    // }
}

// Q20 : Find Factors of a Number
void factors(int num)
{
    vector<int> v;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
*/

// Q21 : Add Two Fractions
float addFractions(float a, float b)
{
    return a + b;
}

// Q22 : GCD of Two Nums
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

/*
// QN :
int fibonacci(int n)
{
}

*/

///////////////////////////////////////////////

int main()
{
    cout << gcd(18, 42) << endl;
    return 0;
}