#include<bits/stdc++.h>
using namespace std ;
string names[100];
int main (void) {
    int n ;
    cout << "Enter Size " ; cin >> n;
    cout << "Enter String : " ;
    for(int i = 0 ; i < n ; i++) cin >> names[i];
    string temp;
    for(int i = 0 ; i < n ; i++) {
        for(int j= 0 ; j < n ; j++) {
            if(names[j].compare(names[j+1]) > 0 ){
                temp = names[j+ 1];
                names[j+1] = names[j];
                names[j] = temp;

            }
        }
    }
    cout << "After Sorted the String :\n ";
    for(string s : names) {
        cout << s << " ";
    }
    return 0;
}