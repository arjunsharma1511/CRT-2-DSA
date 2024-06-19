//find the maximum element in a vector
#include <iostream>
#include <vector>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define vi vector<int>

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vi v(n);
    cout << "Enter the elements: ";
    forn(i,n){
        cin >> v[i];
    }
    int max = v[0];
    forn(i,n){
        if(v[i] > max){
            max = v[i];
        }
    }
    cout << "The maximum element is: " << max << endl;
    //find minimum element also
    forn(i,n){
        if(v[i] < max){
            max = v[i];
        }
    }
    cout << "The minimum element is: " << max << endl;
    return 0;
}

   
