#include <iostream>
#include <windows.h>
#include "../headers/play.h"
#include "../headers/winner.h"
using namespace std;

int main () {
    while (winner() == 's' && counter < 9){
        matrix_pr();
        play();
    }

    if (winner() == 'x'){
        cout<<"congrats <<X>> the winner";

    }else if (winner() == 'o'){
    cout<<"congrats <<O>> the winner";

    }
    if (counter >= 9){
        cout<<"Game is finished without winner";
    }

            }
