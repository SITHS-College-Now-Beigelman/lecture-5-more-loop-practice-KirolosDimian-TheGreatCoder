// Kirolos Dimian
// Lecture 5
// 10/7/24

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;



int main() // This is the function "main"
{
    // Defining Variables
    double Money_In_DaBank;
    double Number_Of_Transactions;
    double Value_Of_Transaction;
    string Type_Of_Transaction;
    double credit;
    double debit;

    // Question being asked for the user to make inputs
    cout << "How much money did your bank accound have at the start of the day?" << endl;
    cin >> Money_In_DaBank;
    cout << "How many bank transactions were made were done that day?" << endl;
    cin >> Number_Of_Transactions;

    // Making it fixed so that it is always to 2 decimal places for money
    cout << fixed << setprecision(2);

    // While loop being made
    while (Number_Of_Transactions != 0)
    {
        // Questions being asked every time
        cout << "How much money was transacted?" << endl;
        cin >> Value_Of_Transaction;
        cout << "What type of transaction did you make Credit or Debit?" << endl;
        cin >> Type_Of_Transaction;
        
        // If loop being made to see if he used Debit
        if (Type_Of_Transaction == ("Debit"))
        {
            // Updating the Money in the bank after the transaction after the math
            Money_In_DaBank = Money_In_DaBank - Value_Of_Transaction;
            Number_Of_Transactions = Number_Of_Transactions - 1;
            
            // Printing statement after each time
            cout << "Your final balance after the transactions is $" << Money_In_DaBank << endl;
            cout << endl;

            // To calculate the total debit over time. 
            debit = debit + Value_Of_Transaction;
        }

        if (Type_Of_Transaction == ("Credit"))
        {
            Money_In_DaBank = Money_In_DaBank + Value_Of_Transaction;
            Number_Of_Transactions = Number_Of_Transactions - 1;
            cout << "Your final balance after the transactions is $" << Money_In_DaBank << endl;
            cout << endl;
            credit = credit + Value_Of_Transaction;

        }

    }
        
    cout << "The total debit amount today is $" << debit << " and the amount of credit today is $" << credit << endl;
    cout << "The final amount of money in the bank is $" << Money_In_DaBank << endl;

    return 0;

}

/*

How much money did your bank accound have at the start of the day?
500.00 
How many bank transactions were made were done that day?
3
How much money was transacted?
29.00
What type of transaction did you make Credit or Debit?
Debit
Your final balance after the transactions is $471.00

How much money was transacted?
42.000
What type of transaction did you make Credit or Debit?
Debit
Your final balance after the transactions is $429.00

How much money was transacted?
100.00
What type of transaction did you make Credit or Debit?
Credit
Your final balance after the transactions is $529.00

The total debit amount today is $71.00 and the amount of credit today is $100.00
The final amount of money in the bank is $529.00*/