#include <iostream>
using namespace std;

int height(int n) {
    if(n==0)
        return 1;
    else if(n==1)
        return 2;
    else
        {
        int x=2;
        for(int i=1;i<n;i++)
        {
            if(i%2==1)
             {
                 x=x+1;
             }
            else
             {
                    x=x*2;
                }
         }
         return x ;
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}