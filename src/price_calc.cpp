#include <iostream>
#include <string>
using namespace std;

const int STICK_1 = 30;
const int STICK_P = 120;
const int ST1 = 80;
const int ST2 = 160;
const int ST3 = 50;
const int IC = 40;
const int REF = 140;

int price_calc(string &price_type, int &extra_chars, bool additions, bool nsfw, bool bg){
    int price = -1;
    //base price for piece
    if (price_type == "Style1")
       price = ST1;
    if (price_type == "Style2")
        price = ST2;
    if (price_type == "Style3")
        price = ST3;
    if (price_type == "Sticker")
        price = STICK_1;
    if (price_type == "Sticker_pack")
        price = STICK_P;
    if (price_type == "Icon")
        price = IC;
    if (price_type == "Refsheet")
        price = REF;
    if(nsfw)
        price += price * 0.3;

    int base_price = price; //for calcing

    if(extra_chars > 0){
        price += (base_price/2)*extra_chars;
    }
    if (bg){
        price += base_price/2;
    }
    if(additions)
        price += base_price * 0.2;
    return price;
}

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
    total_price = price_calc(category,numchar,additions,nsfw,bg);

    cout << "\nTotal price is: " << total_price << endl;
}