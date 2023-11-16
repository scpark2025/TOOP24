# TOOP24
# Lesson24-Exercise: Destructors and Inheritance
Here are a few more things about classes… this will let us perform “one more thing” before they disappear! A major feature of classes is the concept of inheritance. This provides a means to logically organize classes and significantly reduce code duplication (and is a major feature of OOP). 

References: C++ Language Tutorial: 
  1. Classes (second half), http://www.cplusplus.com/doc/tutorial/classes2/  
  2. Friendship and Inheritance, http://www.cplusplus.com/doc/tutorial/inheritance/

# In Class Exercise
>[!Note]
>Initially all variables will be passed by value to all functions and methods.
1. Create a new directory for your TOOP24 in class exercise. In that directory, clone the contents of this repository.
2. Create a new file named `vehicle.h`, define a class named CVehicle and it a private string `owner`, a public integer `numWheels`, and a protected string `color`
    - Give it a public default constructor that does the following:
      - displays `Default constructor of CVehicle called`
      - sets `owner` to `Not Specified
      - sets `numWheels` to -1
      - sets `color` to `Not Specified`
      - displays `Leaving CVehicle Default constructor`
    - Give it a public constructor that takes arguments for and assigns values to `owner`, `numWheels`, and `color`
    - Give it a public destructor that contains this single line:
      ```
      cout << "CVEHICLE DESTRUCTOR CALLED. Deleting " << owner << "'s " << color << " vehicle\n"  
      ```
3. Now compile and run the code and answer these questions: 
    - How many times was the CVehicle Default Constructor called? How do you know this? 
    - How many times was the CVehicle Destructor called? What was the owner and color displayed for each call?
      
4. Create a name file named `car.h`

5. In `car.h` Define a (public) child of `CVehicle` (this implements inheritance) named `CCar` and give it a public string named `engine`
    - Give it a public constructor that takes `numWheels`, `color`, and `engine` and sets these values accordingly.  

6. Comment out or delete the line that says “/* DELETE FOR PART 6”, compile and run the code and then answer these questions: 
    - How many CVehicle objects are declared in main? 
    - How many times was the CVehicle Default Constructor called? Given your answer to #1, how is this possible? 
    - How many times was the CVehicle Destructor called?  
