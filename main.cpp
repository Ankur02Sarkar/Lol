#include <iostream>
#include <vector>
#include <math.h>
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

// Q23 : Check for Armstrong Number
int isArmstrong(int num)
{
    int temp = num;
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum + pow(rem, 3);
        num = num / 10;
    }
    return sum == temp;
}

// Q24 : Greatest of Two Nums
int greatestOf2(int a, int b)
{
    return (a > b) ? a : b;
}

// Q25 : Greatest of Three Nums
int greatestOf3(int a, int b, int c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

// Q26 : Leap Year or not
void isLeapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        cout << "Leap Year";
    else
        cout << "Not Leap Year";
}

// Q27 : Check for Prime
void isPrime(int num)
{
    if (num > 1)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "Not Prime";
                return;
            }
        }
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}

// Q28 : Check for Palindrome
void isPalindrome(int num)
{
    int temp = num;
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    if (sum == temp)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}

// Q29 : Prime Numbers in a given range
void primeNumbersRanged(int lower, int upper)
{
    vector<int> primes;
    for (int i = lower; i <= upper; i++)
    {
        if (i < 2)
            continue;

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            primes.push_back(i);
        }
    }

    for (int k = 0; k < primes.size(); k++)
    {
        cout << primes[k] << " ";
    }
}

// Q30 : Armstrong numbers between two intervals
void armstrongNumbersRanged(int lower, int upper)
{
    vector<int> arms;
    for (int i = lower; i <= upper; i++)
    {
        int temp = i;
        int sum = 0;
        int n = 0;

        while (temp != 0)
        {
            temp = temp / 10;
            n++;
        }

        temp = i;

        while (temp > 0)
        {
            int rem = temp % 10;
            sum += pow(rem, n);
            temp = temp / 10;
        }

        if (sum == i)
        {
            arms.push_back(i);
        }
    }

    for (int k = 0; k < arms.size(); k++)
    {
        cout << arms[k] << " ";
    }
}

// Q31 : A Number as Sum of two Primes
int checkPrime(int n)
{
    // 0 and 1 are not prime numbers
    if (n <= 1)
        return 0;

    // 2 is the only even prime number
    if (n == 2)
        return 1;

    // Eliminate even numbers > 2
    if (n % 2 == 0)
        return 0;

    // Only check for odd divisors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return 0;

    // If no divisors were found, number is prime
    return 1;
}

void numToPrimeSum(int num)
{
    bool found = false;
    for (int i = 2; i <= num / 2; i++)
    {
        if (checkPrime(i) && checkPrime(num - i))
        {
            cout << num << " = " << i << " + " << (num - i);
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "No Primes Sum in the given Range";
    }
}
*/

// Q32 : Replace all 0’s with 1 in a given integer
long long int replaceZeroes(long long int num)
{
    // string val = to_string(num);
    // for (int i = 0; i < val.length(); i++){
    //     if(val[i] == '0'){
    //         val[i] = '1';
    //     }
    // }
    // return stoi(val);

    // Optimised
    long long int res = 0;
    long long int tensPower = 1;
    if (num == 0)
        return 1;

    while (num > 0)
    {
        int digit = num % 10;
        if (digit == 0)
        {
            digit = 1;
        }
        res = tensPower * digit + res;
        num = num / 10;
        tensPower = tensPower * 10;
    }
    return res;
}

// Q33 : Pyramid pattern using stars
void printPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Q34 : Pyramid pattern using numbers
void printPyramid2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

///////////////////////////////////////////////

int main()
{
    printPyramid2(5);
    return 0;
}