#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string str1,string str2)
{

    int l1 = str1.length();
    int l2 = str2.length();
    
    if (l1 != l2)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < l1; i++)
        if (str1[i] != str2[i])
            return false;
    
    return true;
}

int main()
{
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;

    cout<<"Enter second string: ";
    cin>>str2;

    if(areAnagram(str1,str2))
        cout<<"Anagrams"<<endl;
    else
        cout<<"Not Anagrams"<<endl;
    return 0;
}