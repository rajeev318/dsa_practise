#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void defanging(string &s)
{
    int index = 0;
    string ans;
    while (index < s.size())
    {
        if (s[index] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans += s[index];
        }
        index++;
    }
    cout<<ans<<endl;
}
int main()
{
    // enter strring like 1.2.1.3.2 // 255.100.25.60
    //defanging means 1[.]2[.]1[.]3[.]2 like . ko [.] me likhna 
    string address;
    cout << "enter the ip address: ";
    cin >> address;
    defanging(address);
}