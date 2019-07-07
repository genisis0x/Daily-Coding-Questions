#include <bits/stdc++.h>
bool is_vowel(char q) 
{
    if((q == 'A' || q == 'a' || q == 'E' || q == 'e' ||  
    q == 'I' || q == 'i' || q == 'O' || q == 'o' || q == 'U' || q == 'u'))
        return 1;
    return 0;
}
using namespace std;
int main()
{
    string str = "Please read this application and give me gratuity";
    int i = -1;
    int count = 0;
    int len = str.length();
    //“Please read this application and give me gratuity”
    cout << "such occurences are:" << endl;
    while(++i < len)
    {
        if(is_vowel(str[i]))
            if(is_vowel(str[i + 1]))
            {
                cout << str[i] << str[i + 1] << endl;
                count++;
            }
    }
    cout << "Total occurences are: "<<count << endl;
}