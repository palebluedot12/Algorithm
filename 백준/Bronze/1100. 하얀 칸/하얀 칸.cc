#include <iostream>

using namespace std;

int main(void) {
    
    char board[8][8];
    int count = 0;
    
    // 하얀 칸에 해당하는지
    // 해당 칸에 F가 있는지, 있으면 count

    /*
    (0,0) (0,2) ... (0,8)
    (1,1) (1,3) ... (1,7)
    (2,0) (2,2) ... (2,8)
    */

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> board[i][j];

            if (i == 0 || i % 2 == 0) {
                if ((j % 2 == 0) && (board[i][j] == 'F')) count++; 
            }

            else {
                if ((j % 2 == 1) && (board[i][j] == 'F')) count++;
            }
        }
    }

    cout << count;

}