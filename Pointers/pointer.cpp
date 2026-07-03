#include<iostream>
using namespace std;
int main()
{
    /*
    Pointer:
    A pointer is a special variable that is capable of
    holding the memory address of another variable of
    the same dataType, a pointer is denoted by * symbol
    in its declaration, for example:
    int *ptr;
    Here ptr is an integer pointer that can hold the
    memory address of an int variable. Its done as:
    int a=10;
    ptr=&a; // same as int *ptr=&a;
    Now ptr holds the memory address of a. We can use
    address of a by just writing ptr and the value at
    a by writing *ptr. This use of * to access the 
    value of a is called dereferencing the pointer.
    
    Following is a little piece of code to verify:
    */

    cout<<"Pointer :\n";
    int a=10;
    int *ptr=&a;
    cout<<"a    = "<<a<<'\n';
    cout<<"&a   = "<<&a<<'\n';
    cout<<"ptr  = "<<ptr<<'\n';
    cout<<"*ptr = "<<*ptr<<'\n';

    /*
    Double or Tripple Pointer:
    A pointer that can hold the address of a single*
    pointer is called a double pointer and is denoted
    by two * in declaration:
    int *p;
    int **p1=&p;
    Similarly a tripple pointer with three * can hold
    the address of a double pointer:
    int ***r=&q;
    In short, a pointer with N *s can hold the address
    of a pointer with N-1 *s.

    Following is a little piece of code to verify:
    */

    // double and tripple pointer:
    cout<<"\nDouble And Tripple Pointer :\n";
    int *p;
    int **q=&p;
    int ***r=&q;
    cout<<"&p (single Pointer) = "<<&p<<'\n';
    cout<<"q  (double Pointer) = "<<q<<'\n';
    cout<<"&q (double Pointer) = "<<&q<<'\n';
    cout<<"r  (Triple Pointer) = "<<r<<'\n';

    /*
    Types Of Pointer (4):

    Pointer To A Variable:
    This is a normal pointer to a variable,
    it can be identified by the absence of the 
    keyword "const" in the pointer declaration:
    int b=20;
    int *ptr1=&b;
    Here ptr1 is a pointer to variable b, the memory
    address stored in ptr1 can be changed and the
    value at that address can also be changed.

    Pointer To A Constant:
    This is a pointer to a constant, it can be seen
    by the presense of the keyword "const" before or
    after the dataType of the pointer in declaration:
    const int c=10;
    const int *ptr2=&c or int const *ptr2=&c;
    Here ptr2 is a pointer to a constant, although
    the memory address is ptr2 can be changed but
    the value stored at that address cannot be changed.

    Constant Pointer To A variable:
    This is a constant pointer to a variable,
    it can be identified by the presence of the keyword
    "const" between the * and the pointer name in
    the declaration:
    int d=40;
    int *const ptr3=&d;
    Here ptr3 is a constant pointer, the memory address
    stored in ptr3 cannot be changed but the value at
    that address can be changed.

    Constant Pointer To A Constant:
    This is a contant pointer to a constant, it can be
    identified by the dual presence of the keyword
    "const", once before or after the dataType of the
    pointer and then second time between the * and the
    pointer name in the declaration:
    const int e=50;
    const int *const ptr4=&e; or int const *const ptr4=&e;
    Here ptr4 is a constant pointer to a constant, neither
    the address in ptr4 nor the value at that address can
    be changed in this case.

    Following is a little piece of code to verify:
    */
    
    // pointer to variable:
    cout<<"\nPointer To A Variable :\n";
    int b=20;
    int *ptr1=&b;
    cout<<"(*ptr1++) : "<<(*ptr1)++<<'\n'; // Valid
    cout<<"ptr1++ : "<<ptr1++<<'\n'; // Valid

    // pointer to constant:
    cout<<"\nPointer To A Constant :\n";
    const int c=30;
    const int *ptr2=&c;
    // cout<<"(*ptr2)++ : "<<(*ptr2)++<<'\n'; // Invalid, removing the // at the start will give error
    cout<<"ptr2++ : "<<ptr2++<<'\n'; // Valid

    // constant pointer to variable:
    cout<<"\nConstant Pointer To A Variable :\n";
    int d=40;
    int *const ptr3=&d;
    cout<<"(*ptr3)++ : "<<(*ptr3)++<<'\n'; // Valid
    // cout<<"ptr3++ : "<<ptr3++<<'\n'; // Invalid, removing the // at the start will give error

    // constant pointer to constant:
    cout<<"\nConstant Pointer To A Constant :\n";
    const int e=50;
    const int *const ptr4=&e;
    // cout<<"(*ptr4)++ : "<<(*ptr4)++<<'\n'; // Invalid, removing the // at the start will give error
    // cout<<"ptr4++ : "<<ptr4++<<'\n'; // Invalid, removing the // at the start will give error

    /*
    There are two Special Types of Pointer, these are:
    1) Void Pointer
    2) Null Pointer

    Void Pointer:
    This is a pointer that can hold the memory address
    of any dataType but it must be typeCasted before being
    used anywhere. For example:
    int f=60;
    char g='A';
    float h=1.2;
    void *ptr6;
    ptr6=&f;
    ptr6=&g;
    ptr6=&h;
    This void pointer ptr6 is capable of storing the address
    of all of any dataType variables as along as we typeCast it
    before using it, like if we need to use it as int* then 
    we will have typeCast it to int* like:
    cout<<*(int*)ptr6;
    However, it is to be noted that void pointers cannot undergo
    any sort of pointer arithematics like ptr6++; or ptr6--; etc.

    Null Pointer:
    This is a pointer that does not hold any memory address,
    the value of this pointer is NULL or nullptr which shows
    that this pointer doesn't point to any memory address, it
    can be defined using the declaration:
    int *ptr7=nullptr; or int *ptr7=NULL;
    Although NULL and nullptr will both mostly work but it is
    preferable to use nullptr over NULL as NULL might show
    unpredictable behaviour in some compilers.
    Null pointer has its own uses, for example there is a
    data structure by the name of LinkedList and the during
    its traversal we determine the end of LinkedList when
    we encounter a Null pointer. Also important to note is that
    we cannot dereference a null pointer because it doesn't
    point to a valid memory location.

    Following is a little piece of code to verify:
    */

    // void pointer:
    cout<<"\nVoid Pointer :\n";
    int f=60;
    char g='A';
    float h=1.2;
    void *ptr6;

    ptr6=&f;
    cout<<"f = "<<f<<'\n';
    cout<<"*(int*)ptr6 = "<<*(int*)ptr6<<'\n';

    ptr6=&g;
    cout<<"g = "<<g<<'\n';
    cout<<"*(char*)ptr6 = "<<*(char*)ptr6<<'\n';

    ptr6=&h;
    cout<<"h = "<<h<<'\n';
    cout<<"*(float*)ptr 6 = "<<*(float*)ptr6<<'\n';

    // null pointer:
    cout<<"\nNull Pointer :\n";
    int *ptr7=nullptr;
    cout<<"ptr7 : "<<ptr7<<'\n';

    return 0;
}