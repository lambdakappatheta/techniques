/* --------------------------------------------------------------------------------
type punning
-------------------------------------------------------------------------------- */

// struct inheritance

/*
Crafting Interpreters: 19.2 Struct Inheritance
*/

// -----




/* --------------------------------------------------------------------------------
macro
-------------------------------------------------------------------------------- */

// do while

/*
Crafting Interpreters: 15.3.1 Binary operators
*/

#define BINARY_OP(op) \
  do { \
    double b = pop(); \
    double a = pop(); \
    push(a op b); \
  } while (false)


// If you aren’t familiar with the trick already, that outer do while loop probably looks really weird. This macro needs to expand to a series of statements. To be careful macro authors, we want to ensure those statements all end up in the same scope when the macro is expanded.

// -----


// ???

/*
Crafting Interpreters: 19.2 Struct Inheritance
*/

// A macro is expanded by inserting the argument expression every place the parameter name appears in the body. If a macro uses a parameter more than once, that expression gets evaluated multiple times.

// -----




/* --------------------------------------------------------------------------------
print
-------------------------------------------------------------------------------- */

// %.*s format string

/*
Crafting Interpreters: 17.2.1 Handling syntax errors
*/

printf("%2d '%.*s'\n", token.type, token.length, token.start);

// That %.*s in the format string is a neat feature. Usually, you set the output precision—the number of characters to show—by placing a number inside the format string. Using * instead lets you pass the precision as an argument. So that printf() call prints the first token.length characters of the string at token.start.

// -----
