## Compile nodejs to  a single, fully static binary file

```bash
./configure --fully-static 
#CC=clang CXX=clang++ ./configure --fully-static --prefix=../install --dest-os=linux
make -j6

# check node
file out/Release/node 
#  ELF 64-bit LSB executable, x86-64, version 1 (GNU/Linux), statically linked, for GNU/Linux 3.2.0, BuildID[sha1]=e5be29b02e283d0efdfc313e409b1a0802bd0603, with debug_info, not stripped


#build for arm 
./arm-configure
make -j6
```
