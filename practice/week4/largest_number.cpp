#include <iostream>
using namespace std;

int main(){
    
    int a, b, c, largest;

    cout << "3개의 정수를 입력하시오:" ;
    cin >> a >> b >> c;

    largest = a;
    
    if (a > b && b > c){
        largest = a;
    }else if (b > a && b > c){
        largest = b;
    }else {
        largest = c;
    }

    cout << "가상 큰 정수는 " << largest << endl;

    return 0;
}