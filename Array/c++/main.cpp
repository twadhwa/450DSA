# include <iostream>


using namespace std ;
class Array {
private :
    int * A ;
    // The actual size of the array
    int size ;
    // The length of the array used
    int length ;



public :

    // Constructor to initialize the array
    Array () {
        size = 10;
        length = 10;



        A = new int[size];

    }


    ~ Array(){
        delete []A;
}
void create (int sz , int len) {

    size = sz;
    length = len;

    if (length <= size) {
        cout<<"The array is ";
        A[0]=1;
        A[3] =-2;
        A[2] = 9;
        A[1]= -3;
        A[6] = 8;
        A[5] = -8;


    }

}





void display(){

    for (int i = 0; i <length ; i++ ){
        cout<<A[i]<<" ";
    }


}

void reverse (){
    int i ,j ;
    int temp ;
    for (i =0 , j = length - 1  ; i <j ; i++ , j--){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp ;


    }

}
// Function to find the max and min in an array
int  max_min (){
    int max , min;
    max = min = A[0];
    for (int i =0 ; i < length ; i ++){
        if (A[i] > max){
            max = A[i];

        }
        if (A[i] < min){
            min = A[i];
        }

    }
    cout<<"The maximum value of the array is "<< max << "\n";
    cout<<"The minimum value of the array is "<< min;
    return 0 ;

}

// Try after heap
int k_max_min(int k){
    int temp;
    for (int i =0 ; i<length ; i ++ ){
        for (int j =0 ; j <i ; j ++ ){
            if (A[i] > A[j]) {


                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout<<"The k th largest element is "<< A[length - k ];
    cout<<"The k th smallest element is "<< A[k-1];
    return 0;


}


// Move all negative element to one side and positive to other
int positive(){
    int i = 0  , j = length -1 , temp;
    while (i<=j){
        if (A[i] > 0 ){
            if (A[j]<0){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp ;
            }
            else {
                j -- ;
            }

        }
        else {
            i ++ ;
        }

    }
    return 0 ;
}

// Cyclically Rotating the array
int cycle (){
    int temp  ;
    for (int i =0 ; i < length ; i ++ ){
        temp = A[i];
        A[i] = A[length-1];
        A[length-1] = temp;

    }
    return 0 ;
}





};
int main (){
    Array arr;
    



    arr.create(7, 7 );
    cout<<"The array is "<<"\n";
    arr.display();
    arr.cycle();
    cout<<"The new array is "<<"\n";
    arr.display ();


}
