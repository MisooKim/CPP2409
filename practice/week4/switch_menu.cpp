#include <iostream>
using namespace std;

int main(){
    int choice;

    cout << "여러분에게 영화를 추천해줄게요!" << endl;
    cout << "1. 액션 " << endl;
    cout << "2. 블록버스터 " << endl;
    cout << "3. 드라마" << endl;    

    cin >> choice;

    switch(choice){
        case 1:
            cout << "파일 저장";
            break;
        case 2:
            cout << "닫기";
            break;
        case 3:
            cout << "종료";
            break;
        default:
            cout << "잘못된 선택";
    }

    return 0;
}