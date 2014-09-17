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
    letter_['1'] = ".----";
    letter_['2'] = "..---";
    letter_['3'] = "...--";
    letter_['4'] = "....-";
    letter_['5'] = ".....";
    letter_['6'] = "-....";
    letter_['7'] = "--...";
    letter_['8'] = "---..";
    letter_['9'] = "----.";
    letter_['0'] = "-----";
}

