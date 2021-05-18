#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 5;
    void *var = &num;
    cout << *(int *)var << endl; 
    return 0;
}
