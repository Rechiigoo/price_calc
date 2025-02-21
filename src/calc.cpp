#include "calculus.h"
using namespace std;

int price = -1;
int price_calc(string &price_type, int &extra_chars, bool additions, bool nsfw, bool bg){
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

    int base_price = price; //for calculating additions

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
