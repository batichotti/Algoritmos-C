#include <stdio.h>

int main() {

    int a = 9;
    int* p = &a;

    int v = {1,2,3};
    int* pv = v; // pv = &v[0]
    pv++; //pv = &v[1]

    return 0;
}