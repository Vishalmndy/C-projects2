#include<iostream>
using namespace std;
 int main()
 {
    float amount,convertedAmount;
    int choice;
    cout<< "Enter the amount in USD: ";
    cin>> amount;
    cout << "\n Enter the currency which you want to convert :" << endl;
    cout << "1.British pound\n2. Euro\n3. Japanese Yen\n4 indian Rupee" << endl;
    cin>> choice;
    switch(choice){
        case 1:
        convertedAmount = amount * 0.83;
             cout << "\n$" << amount << " is equivalent to " << convertedAmount << " euros." << endl;
            break;
            case 2:
            convertedAmount = amount * 0.72;
            cout << "\n$" << amount << " is equivalent to " << convertedAmount << " British pounds." << endl;
            break;
        case 3:
            convertedAmount = amount * 109.76;
            cout << "\n$" << amount << " is equivalent to " << convertedAmount << " Japanese yen." << endl;
            break;
        case 4:
            convertedAmount = amount * 74.61;
            cout << "\n$" << amount << " is equivalent to " << convertedAmount<< " Indian rupees." << endl;
            break;
        default:
            cout << "\nInvalid choice. Please try again." << endl;
            break;

    }
 }