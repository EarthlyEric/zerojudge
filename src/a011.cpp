#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string i;
    char sys = " ";
    while (getline(cin,i))
    {
        int time= count(i.begin(), i.end(),sys);
        cout << time;
    }
    
}