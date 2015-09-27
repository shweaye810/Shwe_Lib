#ifndef SHWE_LIB_CPP
#define SHWE_LIB_CPP

#include <string>

using namespace std;

//testing
/*
 * is_number - check to see if c is a number
 * @c: character
 *
 * if c is between 1 and 9, return true.
 */
bool is_number(char& c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

/*
 * is_alphabet - testing to see if c is alphabet
 */
bool is_alphabet(const char& c)
{
    if ((c <= 'z' && c >= 'a') ||
        (c <= 'z' && c >= 'A'))
            return true;
    return false;
}

/*
 * is_delim - testing to see if c is delimiter
 */

bool is_delim(const char& c)
{
    if (c == ',' || c == '.' || c == ';' || c == '?')
        return true;
    return false;
}

/*
 * set_lower: set whole string to lower case
 * @s: string
 * 
 * using a loop to loop through whole string and
 * set every character to lower case letter
 */
void set_lower(string& s)
{
    for (int i = 0; s[i]; i++) {
        s[i] = tolower(s[i]);
    }
}
#endif
