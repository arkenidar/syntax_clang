#include <iostream>
using namespace std;
int main(){
    // iterations of integers and string array by integer index

    int count=4;
    for(int index=0; index<count; index+=1){
        cout << index << " - ";
    }
    cout << endl;

    string names[]={"north", "south", "west", "east"};
    int names_count=4;
    for(int index=0; index<names_count; index+=1){
        cout << names[index] << " - ";
    }
    cout << endl;

    return 0;
}
