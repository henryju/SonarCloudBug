#include <stdio.h>

typedef enum {APPLE, GRAPE, KIWI} fruit;

void example(fruit f, int i) {
  switch (f) {  // Noncompliant; no case for KIWI
    case APPLE:
      //...
    case GRAPE:
      //...
    case 3: // Noncompliant; case value not in enum
      // ...
  }

int main() {

  switch (i) { // Noncompliant; no default
    case 0:
    // ...
    case 1:
    // ...
    }
  }
    
    printf("Hello, World!\n");
    return 0;
}
