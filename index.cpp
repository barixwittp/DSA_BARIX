#include <bits/stdc++.h>
using namespace std;

// pass by value 

void change(int a){
    a=25;
    cout<<a<<endl;
}


// pass by reference using pointers

void changg(int *ptr){
    *ptr=25;
    cout<<*ptr<<endl;
}

// pass by reference using reference variables

void cha(int &a){
    a=100;
    cout<<a<<endl;
}

int main(){

    // int a=10;
    // int *ptr=&a;
    // cout<<"&a = "<<&a<<"\n"<<"ptr = "<<ptr<<"\n";

    // double pi =3.14;
    // double *ptrr = &pi;
    // cout<<"&pi = "<<&pi<<"\n"<<"ptrr = "<<ptrr;

    // int **pptr = &ptr;
    // cout<<"&pptr = "<<&pptr<<"\n"<<"ptr = "<<&ptr<<endl;

    // deference operator *

    // int harsh = 100;
    // cout<<harsh<<endl;
    // cout<<&harsh<<endl;
    // cout<<*(&harsh)<<endl;

    // int *ptra = &harsh;
    // *ptra =20;
    // cout<<harsh<<endl;

// pass by value 
// used to send arguments into function

// example

// int array =10;
// // change(array);
// // cout<<array;
// // no changes
// changg(&array);
// cout<<array<<endl;
// // cahnges made
// cha(array);
// cout<<array<<endl;
// // cahnges made


int a =32;
int *ptr=&a;

char ch ='A';
char &cho=ch;

cho +='a';
*ptr+=ch;
cout<<a<<","<<ch<<endl;












}