#include <iostream>
using namespace std;

int main() {
    int n,a=1,b=1,c;
    cin>>n;

        cout<<b<<endl;
        for (int i=2; i<=n; i++) {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
        }
    return 0;
}
