#include <iostream>
#include <cmath>

using namespace std; 

    float fV;   //    Future Value
    float pV;   //    Present Value
    float i;    //    Interest Rate in Decimal Form
    float n;    //    Number of Years
    float a;    //    Annuity

    string endProgram;

void PresentValue()
{
    float presentValue;

    cout << "You are now looking for Present Value" << endl;
    cout << "What is the Future Value" << endl;
    cin >> fV;
    cout << "What is the interest Rate in DECIMAL form?" << endl;
    cin >> i;
    cout << "How many years?" << endl;
    cin >> n;

    presentValue = fV*(1/pow(1+i, n));
    cout << "The present value is " << presentValue << endl;
    cin >> endProgram;
}

void FutureValue()
{
    float futureValue;

    cout << "You are now looking for Future Value" << endl;
    cout << "What is the Present Value" << endl;
    cin >> pV;
    cout << "What is the Interest Rate in DECIMAL form?" << endl;
    cin >> i;
    cout << "How many years?" << endl;
    cin >> n;

    futureValue = pV*(pow(1+i, n));
    cout << "The future value is " << futureValue << endl;
    cin >> endProgram;
}

void FutureValueAnnuities()
{
    float futureValueAnnuities;

    cout << "You are now looking for Future Value Annuities" << endl;
    cout << "What is the Interest Rate in DECIMAL form?" << endl;
    cin >> i;
    cout << "What is the Annuity?" << endl;
    cin >> a;
    cout << "How many years?" << endl;
    cin >> n;

    futureValueAnnuities = a*((pow(1+i, n)-1)/i);
    cout << "The Future Value of Annuity is " << futureValueAnnuities << endl;
    cin >> endProgram;
}

void PresentValueAnnuities()
{
    float presentValueAnnuities;

    cout << "You are now looking for Present Value Annuities" << endl;
    cout << "What is the Interest Rate in DECILMAL form?" << endl;
    cin >> i;
    cout << "What is the Annuity?" << endl;
    cin >> a;
    cout << "How many years?" << endl;
    cin >> n;

    presentValueAnnuities = a*(1-(1/(pow(1+i, n))/i));
    cout << "The Present Value of Annuity is " << presentValueAnnuities << endl;
}

int main()
{
    int option;

    cout << "Press [1] Present Value, [2] Future Value, [3] Future Value Annuities, [4] Present Value Annuities" << endl;
    cin >> option;

   switch (option)
   {
        case 1:
            PresentValue();
            break;
        case 2:
            FutureValue();
            break;
        case 3:
            FutureValueAnnuities();
            break;
        case 4:
            cout << "Still in development";
            break;
        default:
            cout << "Unrecognized key";
            cin >> endProgram;
   }


}