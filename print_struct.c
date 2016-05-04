#include <stdio.h>

#include <netinet/in.h>

#include <sys/socket.h>
#include <sys/types.h>

struct mystr {
  int i;
};

int main(int argc, char**argv){
  
  struct mystr str;
  str.i = 0xF4030201;

  printf("mystr addr: %p\n", &str);
  printf("sizeof(str): %lu\n", sizeof(str));

  //traversing a structure using "char*"
  char* pstr = (char*)&str;
  for(char* curr_ptr = pstr; curr_ptr - pstr < sizeof(str); curr_ptr++){
    printf("addr: %p, byte: %02x\n", curr_ptr, *curr_ptr);
  }
  
  //traversing a structure using "unsigned char*"
  for(unsigned char* curr_ptr = (unsigned char*)pstr; curr_ptr - (unsigned char*)pstr < sizeof(str); curr_ptr++){
    printf("addr: %p, byte: %02x\n", curr_ptr, *curr_ptr);
  }
 
  //traversing a structure using "unsigned int*"
  for(unsigned int* curr_ptr = (unsigned int*)pstr; (curr_ptr - (unsigned int*)pstr)*sizeof(int) < sizeof(str); curr_ptr++){
    printf("addr: %p, int: %08x\n", curr_ptr, *curr_ptr);
  }
  return 0;
}
