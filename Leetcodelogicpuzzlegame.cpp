#include<bits/stdc++.h>
using namespace std;
void replace(string &s, int i)
{
int rand_i;
char c;

do
{
    rand_i = rand()%26;
    c = 'a' + rand_i;
} while ((i > 0 && s[i-1] == c) || (i < s.length()-1 && s[i+1] == c));

s[i] = c;
}
void replaceQuestionMark(string &s)
{
if (s.length() == 0)
return;

for (int i = 0; i < s.length(); i++)
{
    if (s[i] == '?')
    {
        replace(s, i);
    }
}
}

int main() {
string s = "xy?xz?";
replaceQuestionMark(s);
std::cout << s << endl;

s = "ab?e?mr??";
replaceQuestionMark(s);
std::cout << s << endl;

s = "??????";
replaceQuestionMark(s);
std::cout << s << endl;
}
