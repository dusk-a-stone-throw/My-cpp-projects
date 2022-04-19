#include "mixed.hpp"
#include <cmath>
#include <iostream>
#include <stdlib.h>
Mixed::Mixed(long long integer, long long numerator, long long denumerator) {
    this->integer     = integer;
    this->numerator   = numerator;
    this->denumerator = denumerator;
}


long long Mixed::getNumerator() {
    return numerator;
}
long long Mixed::getDenumerator() {
    return denumerator;
}
long long Mixed::getInteger() {
    return integer;
}


void Mixed::setNumerator(long long numerator) {
    this->numerator = numerator;
}
void Mixed::setDenumerator(long long denumerator) {
    this->denumerator = denumerator;
}
void Mixed::setInteger(long long integer) {
    this->integer = integer;
}


Mixed Mixed::operator/(const Mixed &other) {
    Mixed result(0,
                 (this->numerator + this->integer * this->denumerator) * other.denumerator, // convert to improper
                 this->denumerator * (other.numerator + other.integer * other.denumerator));
    result.simplify();
    return result;
}

Mixed Mixed::operator+(const Mixed &other) {
    Mixed *temp1 = this;
    Mixed temp2  = other;
    if(temp1->integer != 0) {
        temp1->convertToImproper();
    }
    if(temp2.integer != 0) {
        temp2.convertToImproper();
    }
    Mixed result(0,
                 temp1->numerator * temp2.denumerator + temp2.numerator * temp1->denumerator,
                 temp1->denumerator * temp2.denumerator); // butterfly method
    result.simplify();
    return result;
}

void Mixed::convertToImproper() {
    this->numerator = this->integer * this->denumerator + this->numerator;
    this->integer   = 0;
}
void Mixed::simplify() { // TODO: upgrade this algorithm: convert to improper only if numerator > denumerator, but not always
    if(this->integer != 0) {
        this->convertToImproper();
    }

    long long lowest; // to make the algorithm faster we need to check only the lowest value (numerator or denumerator)
    if(this->numerator <= this->denumerator) {
        lowest = this->numerator;
    }
    else {
        lowest = this->denumerator;
    }
    while(true) {
        bool isIndivisible = true;
        for(long long i = 2; i <= lowest; i++) { // all number can be devided by 1, so we need i >= 2
            if((this->numerator % i == 0) && (this->denumerator % i == 0)) {
                this->numerator   = this->numerator / i;
                this->denumerator = this->denumerator / i;
                isIndivisible     = false;
                break;
            }
        }
        if(isIndivisible) {
            break;
        }
    }
    std::cout << this->integer << " " << this->numerator << " " << this->denumerator << std::endl;
    if(this->numerator > this->denumerator) {
        this->convertToMixed();
    }
    std::cout << this->integer << " " << this->numerator << " " << this->denumerator << std::endl;
    if(this->numerator < 0 && this->numerator < 0) { // remove useless negative
        this->numerator   = -this->numerator;
        this->denumerator = -this->denumerator;
    }
    // else if(this->numerator < 0 && this->denumerator > 0) {
    //     this->integer   = -this->integer;
    //     this->numerator = -this->numerator;
    // }
    // else if(this->numerator > 0 && this->denumerator < 0) {
    //     this->integer     = -this->integer;
    //     this->denumerator = -this->denumerator;
    // }
}
void Mixed::convertToMixed() {
    if(this->integer != 0) {
        this->convertToImproper();
    }
    std::cout << this->integer << " " << this->numerator << " " << this->denumerator << std::endl;
    if(std::abs(this->numerator) > std::abs(this->denumerator)) {
        this->integer   = (long long)(this->numerator / this->denumerator);
        this->numerator = this->numerator - this->integer * this->denumerator;
    }
    else {
    }
}
