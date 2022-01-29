#include <cmath>
#include <gmp.h>
#include <gmpxx.h>
#include <iostream>
#include <ctime>
#include <random>
#include "cryptopp/cryptlib.h"
using std::cin;
using std::cout;
using std::endl;
mpz_class nBitRandomNumber(int n) {
    mpz_class a, b;
    mpz_ui_pow_ui(a.get_mpz_t(), 2, n - 1);
    mpz_ui_pow_ui(b.get_mpz_t(), 2, n);
    return 0;
}
int main() {
    CryptoPP::RandomNumberGenerator generator;
    mpz_class a, b;
    std::random_device randomDevice;

    gmp_randclass rng(gmp_randinit_default);
    rng.seed(randomDevice.min());
    a = rng.get_z_bits(1024);
    cout << a << endl;
    // mpz_ui_pow_ui(a.get_mpz_t(), 2, 1024);
    return 0;
}
