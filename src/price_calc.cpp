#include <iostream>
#include <string>
#include "calculus.h"
using namespace std;

int main(){
    string category;
    int numchar, total_price;
    bool nsfw, additions, bg;
    cout << "\nType the piece category:" << endl;
    cin >> category;
    cout << "\nTpye the number of EXTRA characters (if you type '1', there are 2 characters total)" << endl;
    cin >> numchar;
    cout << "\nIs it nsfw? (0 or 1)" << endl;
    cin >> nsfw;
    cout << "\nAdditions? (0 or 1)"<< endl;
    cin >> additions;
    cout << "\nBackground? (0 or 1)" << endl;
    cin >> bg;
    total_price = price_calc(category,numchar,additions,nsfw,bg); //From calculus.h

    cout << "\nTotal price is: " << total_price << endl;
}
