#include <iostream>
#include <vector>
#include <algorithm>
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

// Q35 : Palindromic pyramid pattern printing
void printPalindromicPyramid(int n)
{
    int i, k, l;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (l = i - 1; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}

// Q36 : Max number of Handshakes
int maxHandshakes(int numOfPeople)
{

    // - Consider N number of people are present in a Room
    // - First Person can handshake ith n-1 people (himself is excluded)
    // - Second Person can handshake ith n-2 people (himself, first person are excluded)
    // - Third Person can handshake ith n-3 people (himself, first, second person are excluded)
    // So, Total Handshakes = (n-1)+(n-2)+(n-3)+ ... + 3+2+1
    // Sum = n*(n-1)/2

    return (numOfPeople * (numOfPeople - 1) / 2);
}

// Q37 : Find the Quadrants in which coordinates lie
void findQuadrant(int x, int y)
{
    if (x > 0 && y > 0)
        cout << "Q1\n";
    else if (x < 0 && y > 0)
        cout << "Q2\n";
    else if (x < 0 && y < 0)
        cout << "Q3\n";
    else
        cout << "Q4\n";
}

// Q38 : Convert digit/number to words
const string EMPTY = "";
const string X[] = {EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
                    "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
                    "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
                    "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
const string Y[] = {EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
                    "Sixty ", "Seventy ", "Eighty ", "Ninety "};

string convertToDigit(int n, string suffix)
{
    if (n == 0)
    {
        return EMPTY;
    }
    // split `n` if it is more than 19
    if (n > 19)
    {
        return Y[n / 10] + X[n % 10] + suffix;
    }
    else
    {
        return X[n] + suffix;
    }
}

void convert(unsigned long long int n)
{
    string res;
    res = convertToDigit((n % 100), "");
    cout << "1 : " << res << endl;
    if (n > 100 && n % 100)
    {
        res = "and " + res;
        cout << "2 : " << res << endl;
    }
    res = convertToDigit(((n / 100) % 10), "Hundred ") + res;
    cout << "3 : " << res << endl;
    res = convertToDigit(((n / 1000) % 100), "Thousand ") + res;
    cout << "4 : " << res << endl;
    res = convertToDigit(((n / 100000) % 100), "Lakh, ") + res;
    cout << "5 : " << res << endl;
    res = convertToDigit((n / 10000000) % 100, "Crore, ") + res;
    cout << "6 : " << res << endl;
    res = convertToDigit((n / 1000000000) % 100, "Billion, ") + res;
    cout << res << endl;
}

// Q39 : Number of days in a given month of a given year
int numOfDays(int month, int year)
{
    if ((month == 2) && ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))))
    {
        return 29;
    }
    else if (month == 2)
    {
        return 28;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 0;
    }
}

// Q40 : nPr Permutation
int factorial(int n)
{
    if (n < 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int permulation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

// Q41 : Binary To Decimal Conversion
int binaryToDecimal(string binary)
{
    int res = 0;
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        res += (binary[i] - '0') * pow(2, binary.length() - 1 - i);
    }
    return res;
}

// Q42 : Decimal To Binary Conversion
string decimalToBinary(int n)
{
    string res = "";
    while (n > 0)
    {
        res = to_string(n % 2) + res;
        n = n / 2;
    }
    return res;
}

// Q43 : Binary To Octal Conversion
string binaryToOctal(string binary)
{
    string octal = "";
    int n = binary.length();
    for (int i = 0; i < n; i += 3)
    {
        string chunk = binary.substr(i, min(3, n - i));
        int dec = stoi(chunk, 0, 2);
        octal += to_string(dec);
    }
    return octal;
}

// Q44 : Octal To Binary Conversion
string octalToBinary(string octal)
{
    string binary = "";
    for (int i = 0; i < octal.length(); i++)
    {
        char c = octal[i];
        int dec = c - '0';
        for (int j = 0; j < 3; j++)
        {
            int bit = dec & 1;
            binary = char(bit + '0') + binary;
            dec = dec >> 1;
        }
    }
    return binary;
}

// Q45 : Decimal To Octal Conversion
string decimalToOctal(int decimal)
{
    string octal = "";
    while (decimal > 0)
    {
        int dig = decimal % 8;
        octal = to_string(dig) + octal;
        decimal = decimal / 8;
    }
    return octal;
}

// Q46 : Octal To Decimal Conversion
int octalToDecimal(string octal)
{
    int decimal = 0;
    int base = 1;
    for (int i = octal.length() - 1; i >= 0; i--)
    {
        int dig = octal[i] - '0';
        decimal += dig * base;
        base = base * 8;
    }
    return decimal;
}

// Q47 : Find number of times digit 3 occurs in each and every number from 0 to n
int findOccurence(int n, int targetDigit = 3)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            int currDig = temp % 10;
            if (currDig == targetDigit)
            {
                count++;
            }
            temp = temp / 10;
        }
    }
    return count;
}

// Q48 : Find number of integers which has exactly 9 divisors
int getDivisors(int n)
{
    int divisors = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            divisors++;
    return divisors;
}

int countNineDivisors(int maxVal)
{
    int count = 0;
    for (int i = 2; i <= maxVal; i++)
        if (getDivisors(i) == 9)
            count++;
    return count;
}

// Q49 : Roots Of Quadratic Equation
void rootsQuadratic(int a, int b, int c)
{
    int discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        int root1 = ((-1 * b) + sqrt(discriminant)) / 2 * a;
        int root2 = ((-1 * b) - sqrt(discriminant)) / 2 * a;
        cout << root1 << " " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        int root = (-1 * b) / 2 * a;
        cout << root << endl;
    }
    else
    {
        cout << "No Real Roots\n";
    }
}

// Q50 : Solid and hollow rectangle star pattern
void printHollowRectangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Q51 : Diamond Pattern using Numbers
void printDiamondPattern(int rowNum)
{
    int space = rowNum - 1, i, j;
    for (i = 1; i <= rowNum; i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space--;
        for (j = 1; j <= (2 * i - 1); j++)
            cout << j;
        cout << endl;
    }
    space = 1;
    for (i = 1; i <= (rowNum - 1); i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space++;
        for (j = 1; j <= (2 * (rowNum - i) - 1); j++)
            cout << j;
        cout << endl;
    }
    cout << endl;
}

// Q52 : Flyod's Triangle Pattern
void floydsTriangle(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// Q53 : Pascal's Triangle Pattern
void pascalsTriangle(int rows)
{
    int coef = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            cout << coef << "   ";
        }
        cout << endl;
    }
}

// Q54 : Copy a String
string copyStr(string s)
{
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        res += s[i];
    }
    return res;
}

// Q55 : Reverse a String
string reverseStr(string s)
{
    string res = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res += s[i];
    }
    return res;
}

// Q56 : Concatenate a String
string concatStr(string s1, string s2)
{
    // return s1 + s2;
    for (int i = 0; i < s2.length(); i++)
    {
        s1 += s2[i];
    }
    return s1;
}

// Q57 : Print a String
void printStr(string s)
{
    cout << s << endl;
}

// Q58 : Print Length of String
void printLenStr(string s)
{
    cout << s.length() << endl;
}

// Q59 : Compare two Strings
bool compareStr(string s1, string s2)
{
    if (s1.length() != s2.length()) // comparing lengths
        return false;
    for (int i = 0; i < s1.length(); i++) // if same length then compare the chars
    {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

// Q60 : Length of string without using inbuilt Function
int lengthOfStr(string s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

// Q61 : Toggle each character of a String
string toggleStr(string s)
{
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
            res += toupper(s[i]);
        else
            res += tolower(s[i]);
    }
    return res;
}

// Q62 : Remove Vowels
string removeVowels(string s)
{
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        char lowerCase = tolower(s[i]);
        if (lowerCase != 'a' && lowerCase != 'e' && lowerCase != 'i' && lowerCase != 'o' && lowerCase != 'u')
        {
            res += s[i];
        }
    }
    return res;
}

// Q63 : Check for Palindrome String
bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

// Q64 : Sort String
string sortStr(string s, string order = "asc")
{
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (order == "asc" && s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
            if (order == "desc" && s[i] < s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    return s;
}

// Q65 : Remove Brackets from Algebric Equation
string removeBrackets(string exp)
{
    string res = "";
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] != '(' && exp[i] != ')')
        {
            res += exp[i];
        }
    }
    return res;
}

// Q66 : Remove Chars in String except Alphabets
string removeChars(string s)
{
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            res += s[i];
        }
    }
    return res;
}

// Q67 : Remove Spaces from String
string removeSpaces(string s)
{
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            res += s[i];
        }
    }
    return res;
}

// Q68 : Sum of Nums in a Str
int sumOfNums(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            sum += s[i] - '0'; // Getting the Ascii
        }
    }
    return sum;
}

// Q69 : Capitalize the first and last letter of each word of a string
string capitalizeWords(string s)
{
    int len = s.length() - 1;
    if (s.empty())
    {
        return "";
    }
    if (isalpha(s[0]))
    {
        s[0] = toupper(s[0]);
    }
    for (int i = 1; i < len + 1; i++)
    {
        if (isspace(s[i]))
        {
            if (isalpha(s[i - 1]))
            {
                s[i - 1] = toupper(s[i - 1]);
            }
            int j = i + 1;
            while (j < len + 1 && isspace(s[j]))
            {
                j++;
            }
            if (j < len + 1 && isalpha(s[j]))
            {
                s[j] = toupper(s[j]);
                i = j;
            }
        }
    }
    if (isalpha(s[len]))
    {
        s[len] = toupper(s[len]);
    }
    return s;
}

// Q70 : Frequency of a character
int frequencyChar(string s, char c)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

// Q71 : Print Non Repeating characters in a String
void printNonRepeatingChars(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (frequencyChar(s, s[i]) == 1)
        {
            cout << s[i];
        }
    }
    cout << endl;
}

// Q73 : Check if Two Strings are anagram or not
bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    int count1[256] = {0};
    int count2[256] = {0};
    for (int i = 0; i < s1.length(); i++)
        count1[s1[i]]++; // s1[0] = "l" thus count["l"] is incremented not count[0]
    for (int i = 0; i < s2.length(); i++)
        count2[s2[i]]++;

    for (int i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
            return false;
    }
    return true;
}

// Q74 : Replace Substring in a String
string replaceSubStr(string s, string oldSubStr, string newSubStr)
{
    string res = "";
    int lenOldSubstr = oldSubStr.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.substr(i, lenOldSubstr) == oldSubStr)
        {
            res += newSubStr;
            i += lenOldSubstr - 1; // this is important
        }
        else
        {
            res += s[i];
        }
    }
    return res;
}

// Q75 : Count common subsequence in two strings
int sequences(string str1, string str2)
{
    int c1 = str1.length();
    int c2 = str2.length();
    int count[c1 + 1][c2 + 1];
    for (int i = 0; i <= c1; i++)
        for (int j = 0; j <= c2; j++)
            count[i][j] = 0;
    for (int i = 1; i <= c1; i++)
        for (int j = 1; j <= c2; j++)
        {
            if (str1[i - 1] == str2[j - 1])
                count[i][j] = 1 + count[i][j - 1] + count[i - 1][j];
            else
                count[i][j] = count[i][j - 1] + count[i - 1][j] - count[i - 1][j - 1];
        }
    return count[c1][c2];
}

// Q76 : Check if two strings match where one string contains wildcard characters
bool isMatch(string s, string p)
{
    int sLen = s.length(), pLen = p.length();
    int i = 0, j = 0, asterisk = -1, match = 0;

    while (i < sLen)
    {
        // If the characters match or there's a '?' in pattern, move to the next character in both strings.
        if (j < pLen && (p[j] == '?' || s[i] == p[j]))
        {
            i++;
            j++;
        }
        // If there's a '*', it might match zero or more characters in s.
        // Remember the position of '*' and the last character matched in s.
        else if (j < pLen && p[j] == '*')
        {
            asterisk = j;
            match = i;
            j++;
        }
        // If the current characters don't match, or we're out of characters in p but previously encountered a '*',
        // backtrack: assume '*' matches one more character, and try again.
        else if (asterisk != -1)
        {
            j = asterisk + 1;
            match++;
            i = match;
        }
        // If none of the above conditions are met, the strings do not match.
        else
        {
            return false;
        }
    }

    // After processing all characters in s, make sure the remaining characters in p are all '*',
    // as they can match an empty sequence.
    while (j < pLen && p[j] == '*')
        j++;

    // If we've processed all characters in p, the strings match.
    return j == pLen;
}
*/

// Q77 : Compare two arrays
bool isSame(int a[], int b[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

// Q78 : Find the Array Type
void checkArrayType(int a[], int len)
{
    bool hasEven = false, hasOdd = false;
    for (int i = 0; i < len; i++)
    {
        if (a[i] % 2 == 0)
        {
            hasEven = true;
        }
        else
        {
            hasOdd = true;
        }
    }
    if (hasEven && hasOdd)
    {
        cout << "Mixed";
    }
    else if (hasEven)
    {
        cout << "Even";
    }
    else if (hasOdd)
    {
        cout << "Odd";
    }
    else
    {
        cout << "IDK";
    }
}

// Q79: Find missing elements of a range
void findMissingElementsInRange(int arr[], int n)
{
    int lower = arr[0], upper = arr[n - 1];
    for (int i = lower; i <= upper; i++)
    {
        bool exists = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                exists = true;
                break;
            }
        }
        if (!exists)
        {
            cout << i << " ";
        }
    }
}

// Q80: Find Triplets with a given Sum
void findTriplets(int arr[], int n, int sum)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == sum)
    //             {
    //                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
    //             }
    //         }
    //     }
    // }
    // Sort array in ascending order
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {

            if (arr[i] + arr[left] + arr[right] == sum)
            {
                cout << arr[i] << ", " << arr[left] << ", " << arr[right] << "\n";

                left++;
                right--;
            }

            else if (arr[i] + arr[left] + arr[right] < sum)
                left++;

            else
                right--;
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 5, 10, 12};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    findTriplets(arr1, len, 8);
    return 0;
}