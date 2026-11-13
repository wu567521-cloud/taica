#include <iostream>
using namespace std;

int main() {
    int n=10,s=0;
    string word;
    while(n--){
        cin>>word;
        if(word.size()>s){
            s=word.size();
        }
    }
    cout<<s;

}