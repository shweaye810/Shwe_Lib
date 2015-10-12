#ifndef SHWE_LIB_H
#define SHWE_LIB_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

bool is_number(char &c);
bool is_alphabet(const char &c);
bool is_delim(const char &c);
void set_lower(string &s);
bool is_space(const char &c);
void test_user_in(string &user_in, int &n, bool &fail, char c);
unsigned int cin_degree();
int cin_coefficient(int i);
int get_num(const string &s, bool &fail);

#endif
