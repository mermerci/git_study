#include<iostream>
using namespace std;

auto minus(auto a, auto b){
    return a-b;
}

int main(){
    int x, y, z;

    cout << "숫자 뺄셈" << endl;
 
    cout << "x값 입력:";
    cin >> x;

    cout << "y값 입력:";
    cin >> y;

    z = x-y;
    cout << "결과: " << z << endl;

    return 0;
}
