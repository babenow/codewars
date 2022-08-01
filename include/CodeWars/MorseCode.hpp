#ifndef CODEWARS_MORSECODE_HPP_
#define CODEWARS_MORSECODE_HPP_

#include <map>
#include <string>
#include <unordered_map>

typedef std::unordered_map<std::string, char> MorseDict;

MorseDict MORSE_CODE = {
    {".-", 'A'},     {"-...", 'B'},   {"-.-.", 'C'},   {"-..", 'D'},
    {".", 'E'},      {"..-.", 'F'},   {"--.", 'G'},    {"....", 'H'},
    {"..", 'I'},     {".---", 'J'},   {"-.-", 'K'},    {".-..", 'L'},
    {"--", 'M'},     {"-.", 'N'},     {"---", 'O'},    {".--.", 'P'},
    {"--.-", 'Q'},   {".-.", 'R'},    {"...", 'S'},    {"-", 'T'},
    {"..-", 'U'},    {"...-", 'V'},   {".--", 'W'},    {"-..-", 'X'},
    {"-.--", 'Y'},   {"--..", 'Z'},   {".----", '1'},  {"..---", '2'},
    {"...--", '3'},  {"....-", '4'},  {".....", '5'},  {"-....", '6'},
    {"--...", '7'},  {"---..", '8'},  {"----.", '9'},  {"-----", '0'},
    {".-.-.-", '.'}, {"--..--", ','}, {"---...", ':'}, {"..--..", '?'},
    {"-...-", '-'},  {"-..-.", '/'}};

std::string decodeMorse(std::string morseCode);

#endif // CODEWARS_MORSECODE_HPP_
