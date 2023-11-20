#include <iostream>
#include <string>

int main() {
  int i; // [rsp+8h] [rbp-C8h]
  int j; // [rsp+Ch] [rbp-C4h]
  __int64 v6[5]; // [rsp+30h] [rbp-A0h]
  char v8[104]; // [rsp+60h] [rbp-70h] BYREF
  v6[0] = 0x7075755545545C4FLL;
  v6[1] = 0x454E5F666544635ALL;
  v6[2] = 0x466B4F4E02144256LL;
  v6[3] = 0x5F4E71594C4B7819LL;
  v6[4] = 0x56847195058797BLL;
  for ( i = 0; i <= 41; ++i )
  {
    if ( (i & 1) != 0 )
      *(v6 + i) ^= 0x36u;
    else
      *(v6 + i) ^= 0x21u;
  }
   for ( j = 0; j <= 41; ++j )
  {
    v8[j] = *(v6 + j);
    std::cout<<v8[j];
  }

  return 0;
}