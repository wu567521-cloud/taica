#include <iostream>
#include <string>
using namespace std;

int main() {
    int answer ,a,b;
    char x;
    string ex;
    cin>>a>>x>>b;
    ex=x;
    if(auto pos=ex.find('+')!=string::npos) answer=a+b;
    else if(auto pos=ex.find('-')!=string::npos) answer=a-b;
    else if(auto pos=ex.find('*')!=string::npos) answer=a*b;
    else if(auto pos=ex.find('/')!=string::npos) answer=a/b;
    cout << answer;
    return 0;
}