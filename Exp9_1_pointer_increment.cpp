// Vidhi Ratan
// 24070123131
// B2
#include<iostream>
using namespace std;

int main(){

    int a=10;
    int* aptr;
    aptr=&a;

    float b=10.5;
    float* bptr;
    bptr=&b;

    double c=10.5;
    double* cptr;
    cptr=&c;

    bool d=true;
    bool* dptr;
    dptr=&d;

    cout<<"Before increment:"<<endl;
    cout<<"int ptr: "<<aptr<<endl;
    cout<<"float ptr: "<<bptr<<endl;
    cout<<"double ptr: "<<cptr<<endl;
    cout<<"bool ptr: "<<dptr<<endl;
    cout<<endl;

    cout<<"After increment:"<<endl;

    aptr++;
    bptr++;
    cptr++;
    dptr++;

    cout<<"int ptr: "<<aptr<<endl;
    cout<<"float ptr: "<<bptr<<endl;
    cout<<"double ptr: "<<cptr<<endl;
    cout<<"bool ptr: "<<dptr<<endl;

    return 0;
}
/*
Output:
Before increment:
int ptr: 0x7ffd59c3319c
float ptr: 0x7ffd59c33198
double ptr: 0x7ffd59c33190
bool ptr: 0x7ffd59c3318f

After increment:
int ptr: 0x7ffd59c331a0
float ptr: 0x7ffd59c3319c
double ptr: 0x7ffd59c33198
bool ptr: 0x7ffd59c33190
*/
