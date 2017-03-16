#include "TInteger.h"

TInteger::TInteger()
{}

TInteger::TInteger(const long long int val) {
    TestV(val);
    value = val;
}

TInteger::~TInteger()
{}

TInteger& TInteger::operator=(const TInteger& right)
{
    if (this == &right) {
        return *this;
    }
    value = right.value;
    return *this;
}

TInteger::operator int () //?????
{
    return value;
}

TInteger& TInteger::operator=(const long long int right)
{
    TestV(right);
    value = right;
    return *this;
}

TInteger& TInteger::operator+=( const TInteger& right)
{
    long long int V = value + right.value;
    TestV(V);
    value = V;
    return *this;
}

TInteger& TInteger::operator+=( const long long int val)
{
    TestV(val);
    long long int V = value + val;
    TestV(V);
    value = V;
    return *this;
}

TInteger& TInteger::operator-=( const TInteger& right)
{
    long long int V = value - right.value;
    TestV(V);
    value = V;
    return *this;
}

TInteger& TInteger::operator-=( const long long int val)
{
    TestV(val);
    long long int V = value - val;
    TestV(V);
    value = V;
    return *this;
}

bool TInteger::operator==( const TInteger& right)
{
    if (this->value == right.value) return true;
    return false;
}

bool TInteger::operator==( const long long int val)
{
    TestV(val);
    if (this->value == val) return true;
    return false;
}


bool TInteger::TestV( const long long int val)
{
    if (val > _Max || val < _Min) throw ExceptionV();
    return true;
}

TInteger operator+( const TInteger& i, const TInteger& j)
{
    return TInteger(i) += TInteger(j);
}

TInteger operator+( const TInteger& i, const long long int val)
{
    return TInteger(i) += val;
}

TInteger operator+( const long long int val, const TInteger& i)
{
    return TInteger(i) += val;
}

TInteger operator-( const TInteger& i, const TInteger& j)
{
    return TInteger(i) -= TInteger(j);
}

TInteger operator-( const TInteger& i, const long long int val)
{
    return TInteger(i) -= val;
}

TInteger operator-( const long long int val, const TInteger& i)
{
    return TInteger(i) -= val;
}

TInteger operator/( const TInteger& i, const TInteger& j)
{
    return TInteger(i) /= TInteger(j);
}

TInteger operator/( const TInteger& i, const long long int val)
{
    return TInteger(i) /= val;
}

TInteger operator/( const long long int val, const TInteger& i)
{
    return TInteger(i) /= val;
}

TInteger operator%( const TInteger& i, const TInteger& j)
{
    return TInteger(i) %= TInteger(j);
}

TInteger operator%( const TInteger& i, const long long int val)
{
    return TInteger(i) %= val;
}

TInteger operator%( const long long int val, const TInteger& i)
{
    return TInteger(i) %= val;
}

TInteger& TInteger::operator*=( const TInteger& right){
    long long int V = value * right.value;
    TestV(V);
    value = V;
    return *this;
}

TInteger& TInteger::operator*=( const long long int val){
    TestV(val);
    long long int V = value * val;
    TestV(V);
    value = V;
    return *this;
}

TInteger & TInteger::operator/=(const TInteger & right)
{
    value /= right.value;
    return *this;
}

TInteger & TInteger::operator/=(const long long int val)
{
    TestV(val);
    value /= val;
   return *this;
}

TInteger & TInteger::operator%=(const TInteger & right)
{
    value = value % right.value;
    return *this;
}

TInteger & TInteger::operator%=(const long long int val)
{
    TestV(val);
    value = value % val;
    return *this;
}
//префиксная версия возвращает значение после инкремента
TInteger& TInteger::operator++()
{
    value++;
    return *this;
}

//постфиксная версия возвращает значение до инкремента
TInteger TInteger::operator++(int)
{
    TInteger oldValue(value);
    value++;
    return oldValue;
}

//префиксная версия возвращает значение после декремента
TInteger& TInteger::operator--()
{
    value--;
    return *this;
}

//постфиксная версия возвращает значение до декремента
TInteger TInteger::operator--(int)
{
    TInteger oldValue(value);
    value--;
    return oldValue;
}

std::ostream & operator<<(std::ostream &out, const TInteger &right)
{
    out << right.value;
    return out;
}


