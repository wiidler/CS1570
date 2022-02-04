// Programmer: Will Weidler
// Student ID: wawq97
// Section: 101 
// Date: 1/30/22
// File: VendingMachine.cpp
// Purpose: This is an assignment due 2/4/22 that will enable a user to order items from a vending machine.

#include <iostream>
#include <iomanip> // Used to use the setprecision() tool, I couldn't find any better way to do it.

using namespace std;

main() {
    // Delcaring and assigning items for sale.
    float schmapple = 1.50; // User input 1
    float lightGrape = 1.00; // User input 2
    float scentPizza = 0.50; // User input 3
    float heavyGrape = 1.25; // User input 4
    float banana = 2.00; // User input 5

    cout << "This is the Schmending Machine! How much money do you have?" << endl;

    float userMoney; // This is the money inputted in the next line.

    cin >> userMoney;

    // Delcaring variables to determine number of times an item is purchased
    int schmappleBuy = 0; 
    int lightGrapeBuy = 0; 
    int scentPizzaBuy = 0; 
    int heavyGrapeBuy = 0; 
    int bananaBuy = 0; 

    int truthValue = 1;
    // Main vending machine program going through inputs 1-5 and stopping when user inputs "n"
    while (truthValue == 1){
        cout << "Enter product selection (1-5)" << endl;

        int userChoice; // This is the choice selected by the user in the next line.

        cin >> userChoice;
        cout << endl;

        if (userChoice == 1) {

            userMoney = userMoney - schmapple; // Subtracting the cost of selection from total money

            schmappleBuy = schmappleBuy + 1; // Added to amount purchased variable

            cout << "Purchased: Schmapple" << endl;
            
        }
        else if (userChoice == 2) {

            userMoney = userMoney - lightGrape; // Subtracting the cost of selection from total money

            lightGrapeBuy = lightGrapeBuy + 1; // Added to amount purchased variable

            cout << "Purchased: Lightly Used Grape" << endl;
            

        }
        else if (userChoice == 3) {

            userMoney = userMoney - scentPizza; // Subtracting the cost of selection from total money

            scentPizzaBuy = scentPizzaBuy + 1; // Added to amount purchased variable

            cout << "Purchased: Scent of a Pizza" << endl;
            

        }
        else if (userChoice == 4) {

            userMoney = userMoney - heavyGrape; // Subtracting the cost of selection from total money

            heavyGrapeBuy = heavyGrapeBuy + 1; // Added to amount purchased variable

            cout << "Purchased: Heavily Used Grape" << endl;
            

        }
        else if (userChoice == 5) {

            userMoney = userMoney - banana; // Subtracting the cost of selection from total money

            bananaBuy = bananaBuy + 1; // Added to amount purchased variable

            cout << "Purchased: Banana?" << endl;
            

        }
        
        string proceed; // Declaring string to indicate whether user continues to purchase items, asssinged in next lines.

        cout << endl; 
        cout << "Keep purchasing? (y/n)" << endl;

        cin >> proceed;
        cout << endl;

        if (proceed == "n") {
                truthValue = truthValue - 1;
            }
    }
    cout << endl;
    cout << "You purchased:" << endl;

    if (schmappleBuy > 0) {
        cout << "Schmapple - " << schmappleBuy << endl;
    }
    if (lightGrapeBuy > 0) {
        cout << "Lightly Used Grape - " << lightGrapeBuy << endl;
    }
    if (scentPizzaBuy > 0) {
        cout << "Scent of a Pizza - " << scentPizzaBuy << endl;
    }
    if (heavyGrapeBuy > 0) {
        cout << "Heavily Used Grape - " << heavyGrapeBuy << endl;
    }
    if (bananaBuy > 0) {
        cout << "Banana? - " << bananaBuy << endl;
    }

    cout << endl;
    cout << "You have $" << fixed << setprecision(2) << userMoney << " remaining. Have a Schmealthy day!";

    return 0;
}
