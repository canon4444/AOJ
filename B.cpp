#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, T;
    cin >> N >> M >> T;

    vector<int> a(N);
    for( int i = 0; i < N; ++i )
        cin >> a[i];

    int ans = T;
    for( int i = 0; i < N; ++i ){
        if( i == 0 ){
            ans -= M * 2;
        } else {
            if( a[i]-a[i-1] <= 2*M ){ // 待機
                ans += M; // 帰り時間をなかったことに
                ans -= (a[i] - a[i-1]); // 待機時間をたす
                if( T-M <= a[i] ) ans -= (T - a[i]);
                else ans -= M;
            } else {
                ans -= M * 2;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
