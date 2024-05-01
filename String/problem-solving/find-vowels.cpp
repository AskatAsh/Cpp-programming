// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int find_vowels(string &str){
    string vowels = "aeiou";
    string s = str;
    int vowel_count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(char c:s){
        if(vowels.find(c) != string::npos){
            vowel_count++;
        }
    }
    return vowel_count;
}

int main(){
    string str;
    cout<<"Enter a String: ";
    cin>>str;
    cout<<find_vowels(str)<<endl;
}