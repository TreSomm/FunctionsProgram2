#include <iostream>

using namespace std;


void getInput(double& currentPrice, double& priceOneYearAgo, double& priceTwoYearsAgo);
void calculateInflationRates(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRate1, double& inflationRate2);
void outputResults(double inflationRate1, double inflationRate2);

int main() {
    double currentPrice, priceOneYearAgo, priceTwoYearsAgo;
    double inflationRate1, inflationRate2;

    getInput(currentPrice, priceOneYearAgo, priceTwoYearsAgo);
    calculateInflationRates(currentPrice, priceOneYearAgo, priceTwoYearsAgo, inflationRate1, inflationRate2);
    outputResults(inflationRate1, inflationRate2);

    return 0;
}

void getInput(double& currentPrice, double& priceOneYearAgo, double& priceTwoYearsAgo) {
    cout << "Enter the current price of the item: ";
    cin >> currentPrice;
    cout << "Enter the price of the item one year ago: ";
    cin >> priceOneYearAgo;
    cout << "Enter the price of the item two years ago: ";
    cin >> priceTwoYearsAgo;
}

void calculateInflationRates(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRate1, double& inflationRate2) {
    inflationRate1 = (currentPrice - priceOneYearAgo) / priceOneYearAgo;
    inflationRate2 = (priceOneYearAgo - priceTwoYearsAgo) / priceTwoYearsAgo;
}

void outputResults(double inflationRate1, double inflationRate2) {
    cout << "Inflation rate for the first year: " << inflationRate1 << endl;
    cout << "Inflation rate for the second year: " << inflationRate2 << endl;

    if (inflationRate1 < inflationRate2) {
        cout << "Inflation trend is decreasing." << endl;
    }
    else if (inflationRate1 > inflationRate2) {
        cout << "Inflation trend is increasing." << endl;
    }
    else {
        cout << "Inflation rates are stable." << endl;
    }
}