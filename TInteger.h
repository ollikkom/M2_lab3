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

    TInteger(long long int val);

    ~TInteger();

    TInteger& operator=(const TInteger& right);
    TInteger& operator=(const long long int right);

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


    bool TestV(long long int val);
};

TInteger operator+(const TInteger& i, const TInteger& j);
TInteger operator+(const TInteger& i, long long int val);
TInteger operator+(const long long int val, const TInteger& i);
TInteger operator-(const TInteger& i, const TInteger& j);
TInteger operator-(const TInteger& i, long long int val);
TInteger operator-(const long long int val, const TInteger& i);
TInteger operator/(const TInteger& i, const TInteger& j);
TInteger operator/(const TInteger& i, long long int val);
TInteger operator/(const long long int val, const TInteger& i);
TInteger operator%(const TInteger& i, const TInteger& j);
TInteger operator%(const TInteger& i, long long int val);
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
