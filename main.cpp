#include<iostream>
#include<conio.h>
#include"Cola.h"
using namespace std;
int main(){
    Cola<int>test;
    for (int i=0;i<11;i++)
        test.push(i);
    test.print();
    getch();
    return 0;
}