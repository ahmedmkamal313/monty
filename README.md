# monty
## Stacks, Queues - LIFO, FIFO
![phythonmonty](https://grijalvo.com/wordpress/wp-content/uploads/2015/12/Make_tea_not_love.jpg)

- This repository was created for project **0x19.C-Stacks,Queues-LIFO,FIFO** for **ALX SE**.

### Contributors
   - [Majda Bouzayd](https://github.com/Magdalina1)
   - [Ahmed Kamal](https://github.com/ahmedmkamal313)

### Learning Objectives
 
In this project, we learned how to implement two common linear data structures: stacks and queues,
using C language. Stacks and queues are useful for storing and manipulating data in a specific order.
We also learned the difference between LIFO (Last In First Out) and FIFO (First In First Out) principles,
which determine how data is inserted and removed from stacks and queues.

### Requirements
 - General
   - Allowed editors: `vi`, `vim`, `emacs`
   - All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=c89`
   - A `README.md` file, at the root of the folder of the project is mandatory
   - The code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
   - Allowed to use a maximum of one global variable
   - No more than 5 functions per file
   - Allowed to use the C standard library
   - The prototypes of all your functions should be included in your header file called `monty.h`

### Data structures
   ```
   typedef struct stack_s
   {
        int n;
        struct stack_s *prev;
        struct stack_s *next;
   } stack_t;
   ```
   ```
   typedef struct instruction_s
   { 
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
   } instruction_t;
   ```

 **Compilation:**
   - code was compiled by :
      `# gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty`

 **opcodes to be implemented into the program:**
  - push, pall, pint, pop, swap, add, nop, sub, div, mul, mod, pchar, pstr, rotl, rotr, stack and queue opcodes.

 **List of Files:**
- **monty.c**: the main function
- **monty.h**: Header file
- **monty_func_0.c:**
   - `int isnumber(char *str)`
   - `char *parse_line(char *line, stack_t **stack, unsigned int line_number)`
   - `void read_file(char *filename, stack_t **stack)`
   - `instruct_func get_op_func(char *str)`
- **monty_func_1.c:**
   - `void _push(stack_t **stack, __attribute__ ((unused))unsigned int line_number)`
   - `void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)`
   - `void _pint(stack_t **stack, unsigned int line_number)`
   - `void _pop(stack_t **stack, unsigned int line_number)`
   - `void free_dlistint(stack_t *head)`
- **monty_func_2.c:**
   - `void _swap(stack_t **stack, unsigned int line_number)`
   - `void _add(stack_t **stack, unsigned int line_number)`
   - `void _nop(__attribute__ ((unused))stack_t **stack,
		__attribute__ ((unused)) unsigned int line_number)`
   - `void _pchar(stack_t **stack, unsigned int line_number)`
   - `int _isalpha(int c)`
- **monty_func_3.c:**
   - `void _pstr(stack_t **stack, unsigned int line_number)`
   - `void _rotl(stack_t **stack, unsigned int line_number)`
   - `void _rotr(stack_t **stack, unsigned int line_number)`
- **monty_func_4.c:**
   - `void _mod(stack_t **stack, unsigned int line_number)`
   - `void _sub(stack_t **stack, unsigned int line_number)`
   - `void _div(stack_t **stack, unsigned int line_number)`
   - `void _mul(stack_t **stack, unsigned int line_number)`
- **monty_func_5.c:**
  - `void _stack(stack_t **stack, unsigned int line_number)`
  - `void _queue(stack_t **stack, unsigned int line_number)`
  - `stack_t *get_tail(stack_t *stack)`

### bf
install the `bf` interpreter to test the code: `sudo apt-get install bf`
- **1000-school.bf:**
  - a Brainf*ck script that prints `School`, followed by a new line.
- **1001-add.bf:**
  - Add two digits given by the user.
  - Read the two digits from stdin, add them, and print the result
  - The total of the two digits with be one digit-long (<10)
- **1002-mul.bf:**
  - Multiply two digits given by the user.
  - Read the two digits from stdin, multiply them, and print the result
  - The result of the multiplication will be one digit-long (<10)
- **1003-mul.bf:**
  - Multiply two digits given by the user.
  - Read the two digits from stdin, multiply them, and print the result, followed by a new line

