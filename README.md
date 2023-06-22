# monty
## Stacks, Queues - LIFO, FIFO
![phythonmonty](https://grijalvo.com/wordpress/wp-content/uploads/2015/12/Make_tea_not_love.jpg)

- This repository was created for project **0x19.C-Stacks,Queues-LIFO,FIFO** for **ALX SE**.

### Contributors
   - [Majda Bouzayd](https://github.com/Magdalina1)
   - [Ahmed Kamal](https://github.com/ahmedmkamal313)

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

### Compilation:
    - code was compiled by :
      `# gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty`

### List of Files
    - **monty.c**: the main function
    - **monty.h**: Header file
    - **monty_func_0.c**
    - **monty_func_1.c**
    - **monty_func_2.c**
    - **monty_func_3.c**
    - **monty_func_4.c**
    - **monty_func_5.c**
