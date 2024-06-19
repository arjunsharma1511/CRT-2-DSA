//take input from the user and store all zeros to the right

#include <iostream>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int v[n];
    cout << "Enter the elements: ";
    forn(i,n){
        cin >> v[i];           //1 0 2 0 3 0 4 0 5 0
    }
    int count = 0;
    forn(i,n){
        if(v[i] != 0){
            v[count] = v[i];
            count++;
        }
    }
    while(count < n){
        v[count] = 0;
        count++;
    }
    cout << "The array with all zeros to the right is: ";
    forn(i,n){
        cout << v[i] << " ";        // 1 2 3 4 5 0 0 0 0 0
    cout << endl;
    return 0;
}