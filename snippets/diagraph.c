/*
In the C programming language, digraphs are pairs of characters that provide alternative ways to represent certain punctuation characters in the language. This feature was introduced to help support keyboards that do not have all the punctuation characters required by the C language.
List of Digraphs

Here are the digraphs defined in the C standard and their corresponding single-character equivalents:

  1.  "<:" for [
  2.  ":>" for ]
  3.  "<%" for {
  4.  "%>" for }
  5.  "%:" for #
  6.  "%:%:" for ## (this is a trigraph, not a digraph, but often mentioned together)

Examples

Here’s how you can use digraphs in C code:
*/

// Using digraphs for the pound sign (hash)
%:include <stdio.h> // Equivalent to #include <stdio.h>

int main() {
    // Using digraphs for square brackets
    int a<::> = {1, 2, 3}; // Equivalent to int a[] = {1, 2, 3};
    
    // Using digraphs for curly braces
    for (int i = 0; i < 3; i++) <% // Equivalent to {
        printf("%d\n", a<:i:>); // Equivalent to a[i]
    %> // Equivalent to }

    return 0;
}

/*
Purpose and Usage

    Portability: Digraphs were introduced to improve the portability of C programs to systems with limited character sets, especially older systems or non-standard keyboards.
    Legacy Systems: They are useful in contexts where certain characters might not be easily accessible or available.
*/


/*
Trigraphs

In addition to digraphs, the C standard also defines trigraphs, which are three-character sequences that are replaced by a single character. 
Trigraphs are more comprehensive in addressing keyboards that lack certain characters. However, trigraphs are less commonly used and considered more obscure.
*/

/*
List of Trigraphs

  1.  ??= for #
  2.  ??/ for \
  3.  ??' for ^
  4.  ??( for [
  5.  ??) for ]
  6.  ??! for |
  7.  ??< for {
  8.  ??> for }
  9.  ??- for ~

Example of Trigraphs

Here’s how you can use trigraphs in C code:

Note : By default Trigraphs might be disabled in your compiler
*/

#include <stdio.h>

int main() {
    printf("Hello, world!??<\n"); // ??< is a trigraph for {
    return 0;
}

