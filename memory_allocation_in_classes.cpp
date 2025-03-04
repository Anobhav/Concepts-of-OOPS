#include <iostream>
using namespace std;

class Shop {
    int item_Id[5];    // Corrected: Declaring array
    int itemprice[5];  // Corrected: Declaring array
    int counter;       // Counter to keep track of entered items

public:
    void initCounter(void) {
        counter = 0;  // Initialize counter
    }
    
    void getPrice(void);    // Function to input item details
    void displayPrice(void);  // Function to display all items
};

void Shop::getPrice(void) {
    if (counter < 5) {  // Ensure we don't exceed array size
        cout << "Enter ID of your item: ";
        cin >> item_Id[counter];

        cout << "Enter price of your item: ";
        cin >> itemprice[counter];

        counter++;
    } else {
        cout << "Cannot add more than 5 items." << endl;
    }
}

void Shop::displayPrice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "Item ID: " << item_Id[i] << " | Item Price: " << itemprice[i] << endl;
    }
}

int main() {
    Shop dukhan;
    dukhan.initCounter();  // Initialize counter before using it

    dukhan.getPrice();  // Corrected function call
    dukhan.getPrice();  // Corrected function call

    dukhan.displayPrice();  // Display entered items

    return 0;
}
