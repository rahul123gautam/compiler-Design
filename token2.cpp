#include<bits/stdc++.h>
using namespace std;
int main(){
     map<string, bool> mp;
    cout<<"Enter your token : ";
    string str = "";
    cin>> str;
    mp.insert({ "if", 1 });
    mp.insert({ "else", 1});
    mp.insert({"while" , 1 });
    mp.insert({ "do", 1 });
    mp.insert({ "int", 1});
    mp.insert({"for" , 1 });
    mp.insert({ "char", 1 });
    mp.insert({ "float", 1});
    mp.insert({"double" , 1 });
    mp.insert({ "static", 1 });
    mp.insert({ "short", 1});
    mp.insert({"long" , 1 });
    mp.insert({ "sizeOf", 1 });
    mp.insert({ "continue", 1});
    mp.insert({"break" , 1 });
    mp.insert({ "unsigned", 1 });
    mp.insert({ "goto", 1});
    mp.insert({"struct" , 1 });
    mp.insert({ "typedef", 1 });
    mp.insert({ "switch", 1});
    mp.insert({"void" , 1 });
    mp.insert({ "case", 1 });
    mp.insert({"const" , 1 });
    mp.insert({ "signed", 1 });
    mp.insert({ "default", 1});
    mp.insert({"return" , 1 });
    mp.insert({ "enum", 1 });
    mp.insert({ "union", 1});
    mp.insert({"volatile" , 1 });
    mp.insert({ "register", 1 });
    mp.insert({ "extern", 1});
    mp.insert({ "auto", 1});
    if(mp.find(str) != mp.end()){
        printf(".................Given string is token .............");
    }
    else{
        printf(".................Given string is  not a token .............");
    }
    return 0;
}