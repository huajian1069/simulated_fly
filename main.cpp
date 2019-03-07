#include <iostream>
#include <cmath>
using namespace std;
int main(){
    /*   i:
     *   1 stands for RP
     *   2 stands for RM
     *   3 stands for RA
     *   4 stands for LA
     *   5 stands for LM
     *   6 stands for LP
     */
    /*   j:
     *   0 stands for coxa
     *   1 stands for femur
     *   2 stands for tibia
     *   3 stands for tarsus
     */
    double A[6][4][3]={

    };
    double d[6][3];

    for(int i = 0; i < 6; i++){
        cout << i+1 << " ";
        for(int j = 1; j < 4; j++){
            for(int k = 0; k < 3; k++){
                d[i][j-1] += pow(A[i][j][k] - A[i][j-1][k],2);
            }
            d[i][j-1] = sqrt(d[i][j-1]);
            cout << d[i][j-1] << "\t";
        }
        cout << endl << endl;
    }
}