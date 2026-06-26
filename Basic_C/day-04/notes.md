## What I Learned Today (Week-01/Day-04)

1. Fundamental Data Types -> int
2. Decimal and Binary Number System
3. Types of int and their ranges
4. Edge cases in the range of data types

---

Data types are the fundamentals of any programming language. Data types define the type of data that will be stored in a variable and the size of the variable — this can depend on one's system, but generally it is the same for everyone.

As we have discussed, the CPU understands only 0s and 1s. These are binary numbers with **base 2**. So, the data that is read or written by the CPU has to be in binary too.

Before starting, let's see what the size of int is on our system. Run the following command on your system.

```c
#include<stdio.h>

int main(){
    printf("Size of Integer(int) : %d\n", sizeof(int));
    return 0;
}
```

The output would be this for my system:

```bash
4
```

Meaning, on my system, int takes 4 bytes of space irrespective of how small or how large an integer we provide to our code. *(Note: There is a limit to this, and we will discuss it further.)*

---

### How Numbers Are Stored: Decimal vs Binary

So, we know **int** takes 4 bytes of space.

But what does that mean?

Let's revisit the decimal number system we use every day. The decimal number system is a base-10 number system using digits from 0 to 9. So, your question should be: if we can only use 0 to 9, how can we represent a number like 1450?

It's simple — we multiply each digit by its respective place value. From right to left, to represent a four-digit number we do: `(digit × 10³) + (digit × 10²) + (digit × 10¹) + (digit × 10⁰)`

So 1450: `(1 × 10³) + (4 × 10²) + (5 × 10¹) + (0 × 10⁰)`
`= 1000 + 400 + 50 + 0 = 1450`

I hope you know addition 😀

In the decimal number system, numbers range from 0 to 9. We can't use a digit outside this range — it's invalid.

Similarly, in the binary number system we have a range of only 0 and 1, and luckily the CPU understands this rather than '1450'. A valid question here is: if the CPU understands only 0s and 1s, how can we see different numbers on our screen? It's simple — counting numbers like (0, 1, 2, 3, ...10, 11, 12...100, 101, 102) can be represented in any number system, be it binary, decimal, or octal. The only thing that changes is how we use digits within that number system. In the case of binary, we do this:

Take a random 4-digit binary number: `1100`.

Similarly, we replace `10^place_value` with `2^place_value`:

`1100 : (1 × 2³) + (1 × 2²) + (0 × 2¹) + (0 × 2⁰)`

`= 8 + 4 + 0 + 0 = `**12**

This is how we represent the number 12 in binary as `1100`.

You may have heard storage terms like Gigabytes, Kilobytes, and Megabytes.

These are nothing but collections of 0s and 1s.

- When we use either a 0 or a 1, we call it a **bit**.
- When we group together 8 bits, we call it a **byte**.
- When we group 1024 bytes, we call it a **Kilobyte**.
- 1024 Kilobytes becomes a **Megabyte**.

*Remember: the int data type takes up 4 bytes.*

---

### Range of int

Now we know how much space int takes and how 0s and 1s map to numbers like 12.

We can now calculate the range of numbers our int data type can hold. *(Note: No data type can store infinite numbers.)*

We know from our example that `1100 → 12`. Let's explore all combinations for the same number of digits.

With 4 digits and 2 possible values per digit, here are all the results:

- 0000 : 0
- 0001 : 1
- 0010 : 2
- 0011 : 3
- 0100 : 4
- 0101 : 5
- 0110 : 6
- 0111 : 7
- 1000 : 8
- 1001 : 9
- 1010 : 10
- 1011 : 11
- 1100 : 12
- 1101 : 13
- 1110 : 14
- 1111 : 15

So for a 4-bit binary number, the range is 0 to 15. To avoid writing out all combinations every time, we can use the formula **(2ⁿ - 1)** to find the maximum value, where **n** is the number of bits.

For a 4-byte integer, the number of bits is `4 × 8 = 32` bits: `(2³² - 1) = 4294967295`.

So the range of numbers we can store using int is **0 to 4294967295**.

---

### Types of Integer Data Types

There are different integer data types available in C based on our requirements. Also note that previously we used unsigned int, which only holds positive integers. We will discuss both unsigned and signed data types.

**Signed vs Unsigned data types**

The only difference is that signed data types can also hold negative integers, while the total count of representable integers remains the same relative to the size of the data type. Unsigned data types can only hold positive integers.

To get the range of a signed data type, we use this formula: **-(2^(n-1)) to (2^(n-1) - 1)**

1. **short int**
   - `sizeof(short int)` : 2 bytes
   - Range of signed short int : -32768 to 32767
   - Range of unsigned short int : 0 to 65535

2. **int**
   - `sizeof(int)` : 4 bytes
   - Range of signed int : -2147483648 to 2147483647
   - Range of unsigned int : 0 to 4294967295

3. **long int**
   - `sizeof(long int)` : 8 bytes
   - Range of signed long int : -9223372036854775808 to 9223372036854775807
   - Range of unsigned long int : 0 to 18446744073709551615

**NOTE:** `sizeof(short int) < sizeof(int) < sizeof(long int)`

---

### What Happens When We Enter Integers Greater Than the Range?

Let's say we have a 3-bit data type. The range will be 0 to 7, consisting of 8 integers.
So we can represent: 0 to 7. But what will happen if we try to store the number 8 or higher?

| Input | 2³ | 2² | 2¹ | 2⁰ | Output |
| ----- | --- | --- | --- | --- | ------ |
| 0     |     | 0   | 0   | 0   | 0      |
| 1     |     | 0   | 0   | 1   | 1      |
| 2     |     | 0   | 1   | 0   | 2      |
| 3     |     | 0   | 1   | 1   | 3      |
| 4     |     | 1   | 0   | 0   | 4      |
| 5     |     | 1   | 0   | 1   | 5      |
| 6     |     | 1   | 1   | 0   | 6      |
| 7     |     | 1   | 1   | 1   | 7      |
| 8     | 1   | 0   | 0   | 0   | 0      |
| 9     | 1   | 0   | 0   | 1   | 1      |
| 10    | 1   | 0   | 1   | 0   | 2      |

When our data type is 3 bits wide, our range is 0 to 7 only. When we give 8 (`1000`) as input, it has 4 digits — but our data type reads only 3 digits from right to left: 1**000**, so the output will be 0.

The pattern here is **MOD 2ⁿ**: `8 MOD 8 = 0`, `9 MOD 8 = 1`

Even if we give 9 as input, we will receive 1 as output.

Here is an example with unsigned int:

```c
#include<stdio.h>

int main(){
    unsigned int var1 = 4294967295;
    unsigned int var2 = 4294967296;

    printf("Here are the results => \nvar1 : %u\nvar2 : %u\n", var1, var2);

    return 0;
}
```

For more, check the GitHub link below — I have the code for signed int there too.

Also, think of a clock: after the hour hand hits 12, 1 repeats itself. Similarly here, from 0 to 4294967295 it forms a circle — when we try to access something out of bounds, the integers wrap around and repeat. This is just an analogy for intuition; the actual mechanism works as shown in the table above.

Today we covered how integers are stored as binary, how to calculate their range, and what overflow actually looks like under the hood. Next up: floating-point numbers, where things get even more interesting.

Want to run these examples yourself? Find all the code here : [https://github.com/mayank2patel/My_C-DS_Learning-Project/tree/main/week-01/day-04](https://github.com/mayank2patel/My_C-DS_Learning-Project/tree/main/week-01/day-04)


