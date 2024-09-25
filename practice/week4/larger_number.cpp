#include <iostream>
using namespace std;

int main(){
    int x, y;

    cout << "x 값을 입력하시오 :";
    cin >> x;

    cout << "y 값을 입력하시오 :";
    cin >> y;

    if (x > y){
        cout << "x 가 y보다 크다" << endl;
    }else if(x == y){
        cout << "x와 y는 같습니다" << endl;
    }else{
        cout << "y 가 x보다 크다" << endl;
    }

    return 0;
}