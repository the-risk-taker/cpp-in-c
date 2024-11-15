# C++ in C application

In this example, an imaginary `fancy` library written in C++ is linked with a C application. There are a few things to be done:

- the header `fancy_lib/fancy.h` needs to be C-compatible,
- the functions declarations and definitions must be wrapped with `extern "C"` to ensure C-style linkage:

    ```c
    #ifdef __cplusplus
    extern "C" {
    #endif

    void fancy_function(int a);

    #ifdef __cplusplus
    }
    #endif
    ```

## Example

To setup and build project, then run example do:

```shell
cmake -S . -B build
cmake --build build --parallel
cmake --build build --target run-example
```

> [!NOTE]  
> Here CMake by default will use C++ compiler for `example`, so `set_target_properties` was used to set C compiler and linker.

## Link library manually

When not using CMake and linking library manually the C++ library must be linked explicitly:

```shell
gcc -Ifancy_lib example/example.c -Lbuild/fancy_lib -lfancy -lstdc++
```
