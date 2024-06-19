// check if a vector is sorted in non decreasing or non- increasing order. If it is, print "Sorted", else print "Not sorted".
#include <iostream>
#include <vector>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define vi vector<int>

bool nonDecreasing(vi v){
    forn(i,v.size()-1){
        if(v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}
bool nonIncreasing(vi v){
    forn(i,v.size()-1){
        if(v[i] < v[i+1]){
            return false;
        }
    }
    return true;
}
bool isSorted(vi v){
    int i=0;
    int n = v.size();
    if(n<2){
        return true;
    }
    while(i<n-1 && v[i] == v[i+1]){
        i++;
    }
    return  (v[i] < v[i+1]) ? nonDecreasing(v) : nonIncreasing(v);

}

int main(){
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    vi v(n);
    cout << "Enter the elements of the vector: ";
    forn(i,n){
        cin >> v[i];
    }
    if(isSorted(v)){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not sorted" << endl;
    }
    return 0;
}
