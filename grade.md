Score: 88

Notes:
- Did not compile, next time it will be -50. (-10)
```cpp
// you forgot to add the int
int main() {
  return 0;
}
```
- Make the prices constant! (-1)
```cpp
const float apple = 1.50;
```
- Incorrect output, you got a negative balance of $-1.25 on the second example output. (-1)
  - You also have a lot of newlines in between all of your text, generally you don't want that.
  - Make sure that you test your code with the examples give in the HW1 readme.
- Invalid inputs.
  - Code breaks if you put a letter in when choosing a product.

Tips:
- To increment or decrement a variable, you can just do:
```cpp
variable++;
variable--;
```
