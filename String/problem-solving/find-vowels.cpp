#include<iostream>
#include<string>
using namespace std;

int find_vowels(string &str){
    string vowels = "aeiou";
    string s;
    int vowel_count = 0;
    for(int i=0; i<str.length(); i++){
        s += tolower(str[i]);
    }
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<vowels.length(); j++){
            if(vowels[j] == s[i]){
                vowel_count++;
            }
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