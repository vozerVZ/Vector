#include <iostream>
#include <vector>
#include "Vector.h"

using namespace std;

int main() {
    //Let's create vector
    Vector *vec;
    //Insert some values
    vec->pushBack(1);
    vec->pushBack(2);
    vec->pushBack(3);
    vec->pushBack(4);
    vec->pushBack(5);
    //Test insert and erase functions
    vec->insert(3, 5);
    vec->erase(2, 10);
    //Print our vector's items with cool and modern iterator
    for (auto&& item : *vec) {
        cout << item << endl;
    }
    //Test copying vector
    Vector *vec_copy = new Vector(*vec);
    
    delete vec;
    delete vec_copy;
    return 0;
}