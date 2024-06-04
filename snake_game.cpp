#include <iostream>
#include <chrono>
#include <thread>
#include <time.h>
#include <windows.h>

template <typename T>
void printArray(const T& arr){
for(int i = 0; i<=7;i++){
    std::cout<<arr[i]<<" ";
}
std::cout<<"\n";
}

void CharacterInput(char &a)
{
    bool end=false;
    clock_t endWait;
    bool noInput=true;
    endWait=clock()+1;
    while (clock()<=endWait && noInput)
    {
        if (GetAsyncKeyState('A'))
        {
            end=true;
            noInput=false;
            a = 'A';
        }
        if (GetAsyncKeyState('S'))
        {
            end=true;
            noInput=false;
            a = 'S';
        }
        if (GetAsyncKeyState('D'))
        {
            end=true;
            noInput=false;
            a = 'D';
        }
        if (GetAsyncKeyState('W'))
        {
            end=true;
            noInput=false;
            a = 'W';
        }
    }
}

int main(){
    char movement;
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
        CharacterInput(movement);
        std::cout<<movement<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Delay for 1 second
}
return 0;
}