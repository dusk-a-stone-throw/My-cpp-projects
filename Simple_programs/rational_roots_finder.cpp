// TODO: optimize algorithm (recurring roots appear)
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
void getSupposedRoots(long long degree, vector<long long> coefficients, vector<long double> &supposedRoots) {
    vector<long long> termFactors {};
    vector<long long> highestDegreeFactors {};
    for(long long i = 1; i <= llabs(coefficients[degree]); i++) {
        if(coefficients[degree] % i == 0) {
            termFactors.push_back(i);
        }
    }
    for(long long i = 1; i <= llabs(coefficients[0]); i++) {
        if(coefficients[0] % i == 0) {
            highestDegreeFactors.push_back(i);
        }
    }
    for(long long i = 0; i < termFactors.size(); i++) {
        for(long long j = 0; j < highestDegreeFactors.size(); j++) {
            supposedRoots.push_back(termFactors[i] / double(highestDegreeFactors[j]));
            supposedRoots.push_back(-(termFactors[i] / double(highestDegreeFactors[j])));
        }
    }
    std::sort(supposedRoots.begin(), supposedRoots.end());
    // Remove duplicate roots(I don't how to do it differently)
    supposedRoots.erase(std::unique(supposedRoots.begin(), supposedRoots.end()), supposedRoots.end());
}
vector<double> checkRoots(vector<long long> coefficients, long long degree, vector<long double> supposedRoots) {
    vector<double> roots {};
    for(long long i = 0; i < supposedRoots.size(); i++) {
        long double tempResult = 0;
        for(long long j = degree, k = 0; j >= 0 && k <= degree; j--, k++) {
            tempResult += coefficients[k] * pow(supposedRoots[i], j);
            if(supposedRoots[i] == 14) {
            }
        }
        if(tempResult == 0) {
            roots.push_back(supposedRoots[i]);
        }
    }
    return roots;
}
int main() {
    long long degree = 9;
    cout << "Enter the highest degree of your equation: ";
    cin >> degree;
    vector<long long> coefficients {};
    long long j = 0;
    for(long long i = degree; i > 0; i--) {
        long long coefficient;
        cout << "Enter the coefficient before "
             << "x^" << i << ": ";
        cin >> coefficient;
        coefficients.push_back(coefficient);
        // j++;
    }
    long long freeTerm;
    cout << "Enter the free term: ";
    cin >> freeTerm;
    coefficients.push_back(freeTerm);
    vector<long double> supposedRoots {};
    getSupposedRoots(degree, coefficients, supposedRoots);
    vector<double> roots = checkRoots(coefficients, degree, supposedRoots);
    if(roots.size() > 0) {
        cout << "Founded rational roots: ";
        cout << roots[0]; // maybe I should do it better
        for(long long i = 1; i < roots.size(); i++) {
            cout << "; " << roots[i];
        }
    }
    else {
        cout << "No rational roots found." << endl;
    }
    return 0;
}
