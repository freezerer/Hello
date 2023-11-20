#include <iostream>
#include <string>

int main() {
    int i; // [rsp+8h] [rbp-C8h]
    int j; // [rsp+Ch] [rbp-C4h]
    __int64 a[5]; // [rsp+30h] [rbp-A0h]
    char v8[104]; // [rsp+60h] [rbp-70h] BYREF
    a[0] = 0x7075755545545C4FLL;
    a[1] = 0x454E5F666544635ALL;
    a[2] = 0x466B4F4E02144256LL;
    a[3] = 0x5F4E71594C4B7819LL;
    a[4] = 0x56847195058797BLL;
    for (i = 0; i <= 41; ++i)
    {
        if ((i & 1) != 0)
            *(a + i) ^= 0x36u;
        else
            *(a + i) ^= 0x21u;
    }
    for (j = 0; j <= 41; ++j)
    {
        v8[j] = *(a + j);
        std::cout << v8[j];
    }

    return 0;
}