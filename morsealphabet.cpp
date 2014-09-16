#include "morsealphabet.h"

MorseAlphabet::MorseAlphabet()
{
    // Letter initialize
    letter_['a'] = ".-";
    letter_['b'] = "-...";
    letter_['c'] = "-.-.";
    letter_['d'] = "-..";
    letter_['e'] = ".";
    letter_['f'] = "..-.";
    letter_['g'] = "--.";
    letter_['h'] = "....";
    letter_['i'] = "..";
    letter_['j'] = ".---";
    letter_['k'] = "-.-";
    letter_['l'] = ".-..";
    letter_['m'] = "--";
    letter_['n'] = "-.";
    letter_['o'] = "---";
    letter_['p'] = ".--.";
    letter_['q'] = "--.-";
    letter_['r'] = ".-.";
    letter_['s'] = "...";
    letter_['t'] = "-";
    letter_['u'] = "..-";
    letter_['v'] = "...-";
    letter_['w'] = ".--";
    letter_['x'] = "-..-";
    letter_['y'] = "-.--";
    letter_['z'] = "--..";

    // Number initialize
    number_['1'] = ".----";
    number_['2'] = "..---";
    number_['3'] = "...--";
    number_['4'] = "....-";
    number_['5'] = ".....";
    number_['6'] = "-....";
    number_['7'] = "--...";
    number_['8'] = "---..";
    number_['9'] = "----.";
    number_['0'] = "-----";
}
