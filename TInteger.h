#include <iostream>
#include <exception>
#define _Max 2147483647
#define _Min -2147483647
#ifndef M2_LAB3_TINTEGER_H
#define M2_LAB3_TINTEGER_H


class TInteger {

private:
    int value;

public:

    TInteger();

    TInteger(const long long int val);

    ~TInteger();

    TInteger& operator=(const TInteger& right);
    TInteger& operator=(const long long int right);
    operator int (); // ????

    //префиксный декримент
    TInteger& operator--();
    //префиксный инкремент
    TInteger& operator++();

    //постфиксный инкремент
     TInteger operator++(int);

    //постфиксный декремент
    TInteger operator--(int);

    TInteger& operator+=(const TInteger& right);

    TInteger& operator+=(long long int val);
    TInteger& operator-=(long long int val);
    TInteger& operator-=(const TInteger& right);
    TInteger& operator*=(const TInteger& right);
    TInteger& operator*=(const long long int val);
    bool operator==(const TInteger& right);
    bool operator==(const long long int val);
    TInteger& operator/=(const long long int val);
    TInteger& operator/=(const TInteger & right);
    TInteger& operator%=(const TInteger & right);
    TInteger& operator%=(const long long int val);

    friend std::ostream & operator<<(std::ostream &, const TInteger &);

    bool TestV(const long long int val);
};

TInteger operator+(const TInteger& i, const TInteger& j);
TInteger operator+(const TInteger& i, const long long int val);
TInteger operator+(const long long int val, const TInteger& i);
TInteger operator-(const TInteger& i, const TInteger& j);
TInteger operator-(const TInteger& i, const long long int val);
TInteger operator-(const long long int val, const TInteger& i);
TInteger operator/(const TInteger& i, const TInteger& j);
TInteger operator/(const TInteger& i, const long long int val);
TInteger operator/(const long long int val, const TInteger& i);
TInteger operator%(const TInteger& i, const TInteger& j);
TInteger operator%(const TInteger& i, const long long int val);
TInteger operator%(const long long int val, const TInteger& i);

class ExceptionV
        :public std::exception
{
public:
    void what() {
        std::cout << "Error, overflow" << std::endl;
    }
};

#endif //M2_LAB3_TINTEGER_H
