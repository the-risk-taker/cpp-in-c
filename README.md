# C++ in C application

In this example imaginary `fancy` library using C++ code is linked with C application. There are few things to be done:

- the header `fancy_lib/fancy.h` needs to be C-compatible,
- the functions declarations must be wrapped with `extern "C"` to ensure C-style linkage:

    ```c
    #ifdef __cplusplus
    extern "C" {
    #endif

    void fancy_function(int a);

    #ifdef __cplusplus
    }
    #endif
    ```

- the function definitions must be wrapped with `extern "C"` too.

## Example

To setup and build project, then run example do:

```shell
cmake -S . -B build
cmake --build build --parallel
cmake --build build --target run-example
```

> [!NOTE]  
> Here CMake used C++ compiler to link example.

## Link library manually

When not using CMake and linking library manually the C++ library must be linked explicitly:

```shell
gcc -Ifancy_lib example/example.c -Lbuild/fancy_lib -lfancy -lstdc++
```
