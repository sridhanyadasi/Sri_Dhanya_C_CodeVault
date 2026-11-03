/* 10. Find whether a number is a power of two */


#include <stdio.h>

int isPowerOfTwo(int num) {
   if (num == 1) return 1;  // Base case: 2^0 = 1
    if (num == 0 || num % 2 != 0) return 0;  // If it's 0 or not divisible by 2, it's not a power of 2
    return isPowerOfTwo(num / 2); // Recursively divide by 2
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    return 0;
}


/*

1  →  0001 (2^0)
2  →  0010 (2^1)
4  →  0100 (2^2)
8  →  1000 (2^3)
16 →  00010000 (2^4)
Whenever you subtract 1, all the bits flip up to the least significant 1:

Example: Checking 8 (which is 1000 in binary)

num = 8 → 1000

num - 1 = 7 → 0111

num & (num - 1) = 1000 & 0111 = 0000 ✅ (Power of 2)

Since the result is 0, the number is a power of 2.

Example Calculations
Let's analyze numbers that are and aren't powers of 2.

Case 1: num = 16 (Power of 2)
Binary of 16 → 00010000

Binary of 15 → 00001111

16 & 15 = 00010000 & 00001111 = 00000000

✅ Result is 0 → 16 is a power of 2.

Case 2: num = 18 (Not a Power of 2)
Binary of 18 → 00010010

Binary of 17 → 00010001

18 & 17 = 00010010 & 00010001 = 00010000

❌ Result is not 0 → 18 is NOT a power of 2.

This approach works efficiently in O(1) time complexity, making it much faster than iterative or recursive methods.

*/
