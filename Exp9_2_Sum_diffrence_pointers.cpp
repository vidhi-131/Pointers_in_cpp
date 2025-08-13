// Vidhi Ratan
// 24070123131
// B2
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int *p1=&arr[2];
    int *p2=&arr[4];
    
    int diff=*p2-*p1;
    
    cout<<"p1 ="<<*p1<<endl;
    cout<<"p2 ="<<*p2<<endl;
    cout<<"diff ="<<diff<<endl;
    
   return 0; 
}

/*
Output:
p1 =30
p2 =50
diff =20
*/
