#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str, str1, str2;

    // ---> Declaration And Taking Input and Output

    // cin >> str; //take word as a input
    // cout << str;

    //printing particular word for n time
    //string str4(10, 's');
    //cout << str4 << endl;

    //take sentence as a input
    //getline(cin, str2);
    //cout << str2;

    //---> If we want to append one string into another then ,
    // str.append(str4); //First Method
    // cout << str << endl;

    // cout << str + str4 << endl; //second Method

    // str = str + str4; //Third Method
    // cout << str;

    //-----> Accessing any character of string .Then
    // cout << " " << str[2];

    //-----> If we want to clear our string then:
    // str.clear();
    // cout << str;

    //----> String comparison
    string s1 = "abcdefghi";
    string s2 = "abc";
    //cout << s2.compare(s1); //it gives outut in zero and once...

    //------>if we want to check is our string is empty then
    // s1.clear();

    // if (s1.empty())
    //     cout << "String is empty" << endl; //if string is empty

    // if (!s2.empty())
    //     cout << "string is not empty"; //if strig is not empty

    //------->if we want to erase something from our string then

    // s1.erase(3, 5); //In this function s1.erase(the index where you want to start erasing , Number of characters you want to erase from index point)
    // cout << s1;

    //------> if we want to find something in our string then

    // cout << s1.find("efg"); //it gives the strating index where our find word is starting

    //------>if we want to insert something in our string then

    // cout << s1.insert(2, "sandeep"); //s1.insert(number where our inseting word start , what we want to insert)

    //----->if we want to find length or size of our string then

    // cout << s1.length() << endl;
    // cout << s1.size() << endl;    //Both are doing same thingss  we can also iterate our string using this

    //---->if we want to create substring from our string then

    // string s = s1.substr(4, 4); //it gives a substring //it takes (where to start index ,and how much chara we want to find)
    // cout << s << endl;

    //-----> if we want to convert our numeric string into integer then

    // string d = "786";
    // int x = stoi(d);
    // cout << x + 23; //it convert it into integer

    //----->if we want to convert int to string then

    // int x = 786;
    // cout << to_string(x) + "45" << endl; //78645

    //------->if we want to sort our string then

    // string x = "jfkjsjssjskjffjuej";
    // sort(x.begin(), x.end()); //it sorts our string
    // cout << x;
    return 0;
}
