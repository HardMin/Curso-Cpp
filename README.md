

- [Curso C++](#curso-c)
    - [The Part 2](#the-part-2)
    - [The Part 3](#the-part-3)


# Course C++

Learning C++ from 0.


Before update 7-04-2022
------------------------

This update, container the parts: [2_Part](https://github.com/HardMin/Curso-Cpp/tree/main/2_Part) and [3_Part](https://github.com/HardMin/Curso-Cpp/tree/main/3_Part).

#### The Part 2

The Part 2, contain exercise from expressions mathematic in coding **C++,** for improving learning.

For Example: 

Create a code for the follow expressions mathematic: 

The follow expression mathematic is a equation.

                  b
            a + ----- 
                  c

Creating a simple calculator from the above equation

```cpp
    #include<iostream>
    
    using namespace std;

    int main(){
        float a, b, c, results = 0; // vars from the executing of the program.

        // Ask the entry from data from the user, for the standard output
        cout<<endl<<"Input the value from 'a': "; cin>>a; // Send to var 'a'
        cout<<endl<<"Input the value from 'b': "; cin>>b; // Send to var 'b'
        cout<<endl<<"Input the value from 'c': "; cin>>c; // Send to var 'c'


        results = a + (b/c);

        // Show by the standard output
        cout<<endl<<"The results is: "<<results;

        return 0; // Must always return a value. In this case a 0;
    }
    
```

The before code, solve the equation giving the necessary values.

#### The Part 3 

The Part 3, contain exercise from conditionals.

Conditional statements are used through the various programming languages to instruct the computer on the decision to make when given some conditions. These decisions are made if and only if the pre-stated conditions are either true or false, depending on the functions the programmer has in mind.

For Example:

Create a code that allow the entry to users greater 18 and minor that 30 age.

```cpp
    
    #include<iostream>

    using namespace std;

    int main(){
        int age_user;

        cout<<endl<<"Insert you age: "; cin>>age_user; // 18

        cout<<endl<<"Do you are allowed to entry?";

        if(user >= 18 && user <= 30){
            cout<<endl<<"Yes, you are allowed to entry";
        }
        else{
            cout<<endl<<"Not, no you are allowed to entry";
        };

        return 0;
    }

```

### librarys from C++



The library `<iostream>`

The library `<conio.h>` contain a function `getch();` that allow that the executable as maintaining and no allow that as exit.

The library `<stdlib.h>` contains a function `system("pause");` that does the same that the function `getch();` from the library `<conio.h>`. But the function `system("pause");` stays and displays a message.

# Programmer

    Author: Diego Aldana.
    Date: 16-04-2022.
    Last update: 17-04-2022.