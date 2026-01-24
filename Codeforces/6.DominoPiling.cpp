#include <iostream>
using namespace std;

int main(){
    int m,n, board;

    cin>>m>>n;
    board = m *n;
    if(board%2 ==0){
        cout<<board/2;
    }
    else{
        board -= 1;
        cout<<board/2;
    }


    return 0;
}