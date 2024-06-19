//take input from the user and reverse the array and store it in itself

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
        cin >> v[i]; 
    }
    forn(i,n/2){                  
        int temp = v[i];
        v[i] = v[n-i-1];
        v[n-i-1] = temp;
    }
    cout << "The reversed array is: ";
    forn(i,n){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

