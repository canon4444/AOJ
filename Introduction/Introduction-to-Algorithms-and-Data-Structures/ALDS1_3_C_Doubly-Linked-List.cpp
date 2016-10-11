// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C&lang=jp

#include <iostream>
#include <vector>
#include <cstdio>


using namespace std;


int main()
{
    int n;
    scanf("%d", &n);
  
    vector<int> v;
    for( int i = 0; i < n; ++i ){
        string str;
        cin >> str;
      
        if( str == "insert" ){
            int x;
            scanf("%d", &x);
            v.push_back(x);
        } else if( str == "delete" ){
            int x;
            scanf("%d", &x);
            for( auto itr = v.end()-1; itr != v.begin()-1; --itr ){
                if( *itr == x ){
                    v.erase(itr);
                    break;
                }
            }
        } else if( str == "deleteFirst" ){
            v.pop_back();
        } else if( str == "deleteLast" ){
            v.erase(v.begin());
        }
    }
  
  
    for( int i = v.size()-1; -1 < i; --i ){
        printf("%d", v[i]);
        if( i != 0 ) printf(" ");
        else printf("\n");
    }
  
  
  return 0;
}
