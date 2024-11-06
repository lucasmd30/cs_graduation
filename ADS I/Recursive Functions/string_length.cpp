// Make a recursive algorithm to calculate the length of a string S.

#include <iostream>
#include <string>
using namespace std;

int strlength(const string& S, int index = 0){
    if (index == S.size()){
        return 0;
    }
    else{
        return 1 + strlength(S, index +1);
    }
}

int main(){
    string S;
    cout << "Type the string: ";
    getline(cin, S);
    cout << "The string length is : " << strlength(S) << endl;
    return 0;


}

