#include <iostream>
#include <string>
using namespace std;
int main()
{
string str1 = "Trip to Hawaii";
string str2 = "Summer or Fall";
string newStr;
newStr = str2 + ' ' + str1;
cout << newStr << endl;
cout << str1 + " in " + str2 << endl;
cout << newStr.length() << endl;
cout << str1.find('H') << endl;
cout << str2.find("or") << endl;
cout << newStr.substr(10, 19) << endl;
cout << newStr.replace(23, 6, "******") << endl;
string str = "C++ Programming";
cout << str << endl;
cout << str.length() << endl;
str[0] = 'J';
str[2] = '$';
cout << str << endl;
system("pause");
return 0;
}