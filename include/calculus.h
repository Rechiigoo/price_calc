#ifndef __calc_h__
#define __calc_h__
#include <string>

const int STICK_1 = 30;
const int STICK_P = 120;
const int ST1 = 80;
const int ST2 = 160;
const int ST3 = 50;
const int IC = 40;
const int REF = 140;

int price_calc(std::string &price_type, int &extra_chars, bool additions, bool nsfw, bool bg);

#endif //CALC_H
