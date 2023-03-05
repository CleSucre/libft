@echo off
make
for %%f in (test\*) do gcc -Wall -Wextra -Werror %%f *.a && a.exe
del a.exe