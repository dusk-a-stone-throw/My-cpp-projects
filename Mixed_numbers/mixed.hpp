#pragma once
class Mixed {
private:
    long long numerator;
    long long denumerator;
    long long integer;

public:
Mixed(long long integer, long long numerator, long long denumerator);

long long getNumerator();
long long getDenumerator();
long long getInteger();

void setNumerator(long long numerator);
void setDenumerator(long long denumerator);
void setInteger(long long integer);

void simplify();
void convertToMixed();
void convertToImproper();
Mixed operator/(const Mixed &other);
Mixed operator+(const Mixed &other);
};
