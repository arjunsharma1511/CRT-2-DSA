//finding the second largest element in a vector 
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
    int second_max = INT_MIN;
    forn(i,n){
        if(v[i] > max){
            second_max = max;
            max = v[i];
        }
        else if(v[i] > second_max && v[i] != max){
            second_max = v[i];
        }
    }
    cout << "The second largest element is: " << second_max << endl;
    return 0;
}