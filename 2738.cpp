// https://onlinejudge.u-aizu.ac.jp/problems/2738

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> S(N);
    for( int i = 0; i < N; ++i )
        cin >> S[i];


    bool flag = true;
    int A = 0, Un = 0;

    for( int i = 0; i < N; ++i ){
        if( S[i] == "A" ){
            ++A;
        } else if( S[i] == "Un" ){
            ++Un;
            if( A < Un ){
                flag = false;
                break;
            } else if( Un <= A ){
                --A;
                --Un;
            }
        }
    }

    if( A != 0 )
        flag = false;

    if( flag ){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
