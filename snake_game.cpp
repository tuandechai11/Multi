#include <iostream>
#include <chrono>
#include <thread>

template <typename T>
void printArray(const T& arr){
for(int i = 0; i<=7;i++){
    std::cout<<arr[i]<<" ";
}
std::cout<<"\n";
}


int main(){
int myArray1[8] = {0,0,0,0,0,0,0,0};
int myArray2[8] = {0,0,0,0,0,0,0,0};
int myArray3[8] = {0,0,0,0,0,0,0,0};
int myArray4[8] = {0,0,0,0,0,0,0,0};
int myArray5[8] = {0,0,0,0,0,0,0,0};
int myArray6[8] = {0,0,0,0,0,0,0,0};
int myArray7[8] = {0,0,0,0,0,0,0,0};
int myArray8[8] = {0,0,0,0,0,0,0,0};

while (true) {
        printArray(myArray1);
        printArray(myArray2);
        printArray(myArray3);
        printArray(myArray4);
        printArray(myArray5);
        printArray(myArray6);
        printArray(myArray7);
        printArray(myArray8);
        std::cout<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Delay for 1 second
}
return 0;
}