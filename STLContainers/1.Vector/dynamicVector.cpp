#include<iostream>
#include<vector>
using namespace std;
/*
Static Memory Allocation :
This memory is allocated at the compile time.
For example : int arr[5]={1,2,3,4,5};
This allocates a static memory of 20 Bytes to arr array at compile time.

Dynamic Memory Allocation :
This memory is allocated at the run time.
For example : vector<int> vec;
vector vec is allocated 0 bytes at compile time, but then if we do :
vec.puch_back(1);
This dynamically allocates 4 bytes additional memory to vec at runtime,
and adds 1 to elements of vec.
To simplify it, whenever a new element is pushed into a filled vector,
another vector is generated in the memory which is double the size of
the first vector, then all the previous elements of first vector are
copied into the new vector, then the new value is pushed into the new
vector and at the end, the old vector is deleted from the memory.

Now size of vector means number of elements currently in the vector
whereas the capacity of vector means max number of elements that the
vector is capable of storing.
*/
int main()
{
    // Declaring Empty Vector vec :
    vector<int> vec;
    // Allocating dynamic memory to vec :
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<"Vec Elements : ";
    for(int i:vec)
        cout<<i<<" ";
    cout<<'\n';
    cout<<"Vec Size : "<<vec.size()<<'\n';
    cout<<"Vec Capacity : "<<vec.capacity()<<'\n';
    return 0;
}