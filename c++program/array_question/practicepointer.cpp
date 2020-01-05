#include<iostream>
using namespace std;
void cube(int &p) {
    p = p*p*p;
    cout << p << "shubha"<<endl;
}
void cube(int *p) {
   *p = (*p) * (*p) * (*p);
   cout << *p <<"rahul"<< endl;
}

int main() {
    int a = 10;
    cout << &a << endl; cout << a << endl;
    cube(a);
    cout << a <<"ssss"<< endl;
    int *p = &a;
    cout << *p << endl;
    cube(p);
    cout << *p<<"kunal"<<endl;
    return 0;
}

