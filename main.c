#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    goto custom_label; // Jump to the custom label

custom_label:
    printf("This is a custom label.\n");
    return 0;
}
