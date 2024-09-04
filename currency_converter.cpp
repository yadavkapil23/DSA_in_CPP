#include <iostream>
using namespace std;

void displayMenu()
{
    cout << "Currency Converter\n";
    cout << "1. USD to INR\n";
    cout << "2. INR to USD\n";
    cout << "3. EUR to USD\n";
    cout << "4. USD to EUR\n";
    cout << "5. Exit\n";
    cout << "Select an option: ";
}

float convertCurrency(float amount, float conversionRate)
{
    return amount * conversionRate;
}

int main()
{
    int choice;
    float amount, result;
    float usdToInr = 82.73;
    float inrToUsd = 0.012;
    float eurToUsd = 1.08;
    float usdToEur = 0.93;

    while (true)
    {
        displayMenu();
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting...\n";
            break;
        }

        cout << "Enter the amount: ";
        cin >> amount;

        switch (choice)
        {
        case 1:
            result = convertCurrency(amount, usdToInr);
            cout << amount << " USD is " << result << " INR\n";
            break;
        case 2:
            result = convertCurrency(amount, inrToUsd);
            cout << amount << " INR is " << result << " USD\n";
            break;
        case 3:
            result = convertCurrency(amount, eurToUsd);
            cout << amount << " EUR is " << result << " USD\n";
            break;
        case 4:
            result = convertCurrency(amount, usdToEur);
            cout << amount << " USD is " << result << " EUR\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
        }

        cout << endl;
    }

    return 0;
}
