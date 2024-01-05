#include <iostream>
using namespace std;
void print(int *x)
{
    cout << x << endl;
    cout << *x << endl;
}
void update(int *x)
{
    *x = *x + 1;
}
// int this function it will taking the array in the form of pointer like that (*arr or arr[]) both are same:
int getSum(int *arr, int n)
{
    cout << "Size: " << sizeof(arr) << endl; // It will give you the size of an pointer.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    // Pointers in integer:
    int arr[10] = {2, 5, 6};

    // They both give you the same value.
    cout << "Address of first index is: " << arr << endl;
    cout << "Address of first index is: " << &arr[0] << endl;
    // This syntax is only used to print the array not for finding the address:
    cout << "Printing the array is: " << arr[0] << endl;

    // Now, We can find the address of all the values:
    cout << "Address of first index is: " << &arr[0] << endl;
    cout << "Address of first index is: " << &arr[1] << endl;
    cout << "Address of first index is: " << &arr[2] << endl;

    // Now, We can find the values present in the array:
    cout << "Address of first index is: " << *(arr) << endl;
    cout << "Address of first index is: " << *(arr + 1) << endl;
    cout << "Address of first index is: " << *(arr + 2) << endl;

    // We can use this method also for finding the value:
    int i = 1; // creating for taking the index number
    cout << "The value of index 1 is: " << i[arr] << endl;

    // This is all about the size of addresses and values:
    int temp[10];
    // It will print the size of an array:
    cout << "The size of an array is: " << sizeof(temp) << endl;
    // It will print the size of 0th index:
    cout << "The size of an 0th index value is: " << sizeof(*temp) << endl;
    cout << "Zeroth index address size: " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    // It will print the 0th index address size:
    cout << "Zeroth index address size: " << sizeof(ptr) << endl;
    // It will give you the 0th index value size:
    cout << "Zeroth index value size: " << sizeof(*ptr) << endl;
    // It will give you the ptr address size:
    cout << "Size of ptr is: " << sizeof(&ptr) << endl;

    // int a[3] = {1, 2, 3};
    // cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;

    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    // Pointer in character:
    char ch[6] = "abcde";
    // (cout) is different for integer pointer and character pointer.
    cout << ch << endl;  // here it will print the entire string of character.
    cout << &ch << endl; // Here it will print the address of the variable 'ch'.

    char *c = &ch[0];
    cout << c << endl; // Here it will print the address of the first element of the array but this is character it will print the entire value.

    char a = 'z';
    char *p = &a;

    cout << "It will give you the value of pointer p: " << *p << endl;
    cout << "It will give you the address of p: " << &p << endl;
    cout << "It will give the value but also the entire elements until the null character is not found: " << p << endl; // it will print the address of 0th but it will print the all element address till the null character is not found.

    // Pointers in function:
    int value = 5;
    int *x = &value;

    // Calling the print function:
    print(x);

    // Calling the update function:
    cout << "Before Updating: " << *x << endl;
    update(x);
    cout << "After Updating: " << *x << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    // Calling the getSum function:
    cout << "Sum is: " << getSum(arr, 5) << endl;
}