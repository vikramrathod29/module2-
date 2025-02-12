#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of entries in the Table: ";
    cin >> num;

    int year[num];
    string subject[num], winner[num], country[num], category[num];

    for (int i = 0; i < num; i++)
    {   
        cout << "\nThe Table of " << i + 1 << " Entry :-\n\n";
        cout << "Enter Year: ";
        cin >> year[i];
        cout << "Enter Subject: ";
        cin.ignore(); // To handle new line issue
        getline(cin, subject[i]);
        cout << "Enter Winner: ";
        getline(cin, winner[i]);
        cout << "Enter Country: ";
        getline(cin, country[i]);
        cout << "Enter Category: ";
        getline(cin, category[i]);
        cout << "-----------------------------------------------";
        cout << endl;
    }

    cout << "\nAward Details:-\n";
    cout << "-----------------------------------------------\n";
    cout << "Year\tSubject\tWinner\tCountry\tCategory\n";
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < num; i++)
    {
        cout << year[i] << "\t" << subject[i] << "\t" << winner[i] << "\t" << country[i] << "\t" << category[i] << endl;
    }

    return 0;
}

