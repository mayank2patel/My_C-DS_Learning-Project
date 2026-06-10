## What I learned Today [Week-01/day-03]

1. Variable Declaration and Initialization
2. Printing sequence of characters

---

### Variable Declaration and Initialization

In C, unlike dynamically typed languages like Python or JavaScript, we have to explicitly declare the variable before using it. In Python you can just write x = 3 and Python figures out the type on its own at runtime. In C, you have to tell the compiler upfront — "hey, this variable is going to hold an integer" — and only then can you use it.

Declaration means assigining properties to the variables:

- Type of the variable
- Name of the variable

Example :

```C
int var;

/* Here, int is the Data type defining the type of data that variable will store. It also assigns the size of the varibale that it will hold.
Then, var is the name of the variable pointing to the memory where will the values be stored. Without Initialization the variables will store garbage values.
*/

int var = 3;
// Here, when we assign 3 to the var. We got Initialization of the variable and can be used to perform different operation while holding that value.
```

---

### Printing

```C 
printf("Neso Academy\n");
printf("%d\n", var);
printf("%d %d\n",var1,var2);
```

In this piece of code we are printing the sequence of characters and integers with the help of function '**printf**' which is provided by C standard library.

Explaining few things:

1. '*\n*' : Is an escape sequence that moves the cursor to the next line. So whatever comes after it in the terminal starts on a fresh line. That's the main job.

2. '*%d*' : Is the placeholder for variable with an integer value. When we want to print an integer value is have to assign a decimal[%d] placeholder inside the *printf* strings and then assign our desired variable as shown in above example. One point to look out for when we are printing multiple values we have to assign the variable in order. by following the above example we have var1 and var2. Taking **var1 = 3** and **var2 = 4**
    
    - If we print it we get this result: 3 4 
    - If we swap and place var2 first and then var1 second : 4 3 

Though seeing it here won't feel like a big thing but what if we are doing some arithmetic operations and we need to correctly print some values in correct order we need to place the variables at their right place.

---

Check out my GitHub repo to see the Codes for this Day : https://github.com/mayank2patel/My_C-DS_Learning-Project.git
