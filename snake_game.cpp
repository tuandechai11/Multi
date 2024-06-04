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
    char movement = 'S';
    bool lose = false;
int cor[2]={0,0};
int myArray0[8] = {0,0,0,0,0,0,0,0};
int myArray1[8] = {0,0,0,0,0,0,0,0};
int myArray2[8] = {0,0,0,0,0,0,0,0};
int myArray3[8] = {0,0,0,0,0,0,0,0};
int myArray4[8] = {0,0,0,0,0,0,0,0};
int myArray5[8] = {0,0,0,0,0,0,0,0};
int myArray6[8] = {0,0,0,0,0,0,0,0};
int myArray7[8] = {0,0,0,0,0,0,0,0};

while (lose == false) {
        printArray(myArray0);
        printArray(myArray1);
        printArray(myArray2);
        printArray(myArray3);
        printArray(myArray4);
        printArray(myArray5);
        printArray(myArray6);
        printArray(myArray7);
        CharacterInput(movement);
        std::cout<<movement<<"\n";
        if (movement == 'A'){
            if (cor[1]==0){
                lose = true;
            } else{
            cor[1]=cor[1]-1;}
        }
        if (movement =='D'){
            if (cor[1]==7){
                lose=true;
            } else{
                cor[1]=cor[1]+1;
            }
        }
        if (movement =='W'){
            if (cor[0]==0){
                lose = true;
            } else {
                cor[0]=cor[0]-1;
            }
        }
        if (movement =='S'){
            if (cor[0]==7){
                lose = true;
            } else {
                cor[0]=cor[0]+1;
            }
        }
        std::cout<<cor[0]<<" "<<cor[1]<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Delay for 1 second
}
std::cout<<"You lose!!!";
return 0;
}