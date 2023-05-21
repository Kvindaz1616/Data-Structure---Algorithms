#include <iostream>
#include  <bits/stdc++.h>
using namespace std;

void swap(){
//swaping two numbers with STL
int num1,num2,swapNum;
num1 = 10;
num2 = 20;
cout << num1 << " " << num2 << endl;
swap(num1,num2);
cout << num1 << " " << num2 << endl;
}


void findMinMax(){
//finding min and max of two numbers with STL
int num1,num2,minNum,maxNum;

num1 = 10;
num2 = 20;
minNum = min(num1,num2);
maxNum = max(num1,num2);
cout << minNum << endl;
cout << maxNum << endl;
}
int main(){

 swap();
 findMinMax();

    return 0;
}