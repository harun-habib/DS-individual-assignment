#include <iostream>
using namespace std;
void insertionsort(int arr[], int size){

for ( int i=1; i<size; i++){
int key =arr[i];
int j=i-1;


while (j>=0 && arr[j] > key){

arr[j +1]= arr[j]; j--;

}

}

}
void printArray(int arr[] ,  int size){
for (int i =0; i < size;  i++)
cout << arr[i]<<"  ";
cout << endl;

}
int main (){

int numbers []={12,11,13,5,6,7,};

int size =sizeof(numbers)/sizeof(numbers[0]);

cout <<"original array: ";

printArray (numbers  , size);


insertionsort( numbers ,size);

cout <<"sorted arry :   ";
printArray(numbers, size); 


}