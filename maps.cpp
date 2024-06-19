//make a crush map of students in a class
#include<iostream>
#include<vector>
#include<map>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define vi vector<int>
#define mii map<int,int>

//populating map
int main(){
    int n;
    cout << "Enter the number of students in the class: ";
    cin >> n;
    mii crushMap;
    cout << "Enter the crush of each student: ";
    forn(i,n){
        int student,crush;
        cin >> student >> crush;
        crushMap[student] = crush;
    }
    cout << "The crush map of the class is: " << endl;
    for(auto it = crushMap.begin(); it != crushMap.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;

}