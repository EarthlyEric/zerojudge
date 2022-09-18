#include <iostream>
using namespace std;

int main(){
    int i[4];
    int time;
    cin >> time;
    while (time--)
    {
        cin >> i[0] >> i[1] >> i[2] >> i[3];
        if(i[3]-i[2]==i[2]-i[1]){
            i[4] = i[3] + (i[3] - i[2]);
        }else{
            i[4] = (i[1] / i[0]) * i[3];
        }
        cout << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << " " << i[4] << endl;
    }
    
}
