// Pointer initialization to null

int* ptr = NULL;

// using new operator

ptr = new(nothrow) int; /// No Throw!  indicate that these functions shall not throw an exception on failure, but return a null pointer instead

if (!ptr)

    cout << "No Space\n";

else

{

    // value stored at allocated address

    *ptr = 10;

    cout << "Value of ptr: " << *ptr << endl;

}
