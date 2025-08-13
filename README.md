# Pointers_in_cpp

Aim: To study and implement pointer concepts in C++.

Tools Used: VS Code.

# Theory:

Pointers in C++ are variables that store memory addresses, typically the address of another variable. They’re a powerful feature of C++ that allow for dynamic memory management, efficient array handling, and complex data structures like linked lists and trees. They are declared using the * operator.

`//Declaration
type* pointer_name;  // int* ptr;`

`//Initialization
type* pointer = &variable;  // int* p = &x;`

## Key Features:
* Can store addresses of variables.
* Dynamic memory allocation.
* Efficient array and string handling.
* Supports arithmetic like increment/decrement, affecting the pointed address based on data type size.

## 1. Pointer Increment:

Pointer arithmetic increments the pointer to point to the next memory location based on the size of its data type. The increment value is not always +1 byte—it depends on the type it points to.

Algorithm:

1. Start.
  
2. Declare variables of int, float, double, and bool.
   
3. Create pointers pointing to each variable.

4. Display addresses before increment.

5. Increment each pointer.

6. Display addresses after increment.

7. Stop.

## 2. Sum and Difference Using Pointers:

The program stores addresses of array elements in a pointer array. It calculates the sum of all elements by dereferencing the pointers and finds the difference between two elements using their values via pointers. 

Algorithm:

1. Start.

2. Declare and initialize an integer array arr with 5 elements: {10, 20, 30, 40, 50}

3. Create two pointers: p1 pointing to address of arr[2] (value 30) p2 pointing to address of arr[4] (value 50)

4. Calculate difference between dereferenced pointer values: diff = *p2 - *p1 (50 - 30 = 20)

5. Display result: Print the computed difference between the pointed values

6. Stop.

## 3. Reversing an Array using Pointers:

Two pointers are assigned to different positions in the array. Using dereferencing, the values are fetched and arithmetic operations are performed directly.

Algorithm:

1. Initialize an array with integer values.

2. Create two pointers pointing to specific indices of the array.

3. Dereference both pointers to access the values.

4. Perform subtraction and addition of the two values.

5. Display the results.

## 4. String input & output using Pointers:

This program demonstrates string manipulation using pointers in C++. The user inputs a string which is stored in str1, while a string pointer str_ptr is assigned the address of this string. By dereferencing the pointer (*str_ptr), the program outputs the original string, illustrating how pointers can indirectly access and display string data stored in memory.

Algorithm:

1. Declare a string variable str1 initialized as empty.

2. Prompt user to input a string value.

3. Store the input string in str1.

4. Create a string pointer str_ptr.

5. Assign address of str1 to str_ptr using & operator.

6. Display the string by dereferencing pointer (*str_ptr).

7. Stop.

# Conclusion:
We learned how pointers can be used to reference data addresses, allow arithmetic calculations on addresses, provide access to arrays and strings, allow operations like pointer arithmetic, array element differencing, array reversal using pointer arrays, and string access via pointers.These implementations provide a clear foundation for understanding low-level memory management concepts in C++.
