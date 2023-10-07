#include <stdio.h>

int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    // subtract one pointer from another
    printf("%u,%uThe difference between age is: %u\n",ptr, _ptr, ptr - _ptr);
    // Compare 2 pointers
    _ptr = &age;
    printf("comaare 2 pointers: %u\n", ptr == _ptr);

    return 0;
}