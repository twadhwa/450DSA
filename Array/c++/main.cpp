#include <iostream>
using namespace std;
// Reversing an array

int main() {
    int temp;
    int array[] = {1,2,4,5,5};

    for(int i =0 , j =4 ; i<j ; i++,j--){
        temp = array[i];
        array[i] = array[j];
        array[j]= temp;


    }
    for (int i =0 ; i<5 ; i++){
        cout<<array[i];
    }



    return 0;
}
