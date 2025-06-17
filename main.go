package main

/*
#include <stdint.h>
#include "../cmodule/factorial.c"
*/
import "C"
import "fmt"

func main() {
    var result C.uint64_t
    C.factorial(10, &result)
    if result == 0 {
        fmt.Println("Ошибка: неверный результат")
    } else {
        fmt.Printf("Факториал 10: %d\n", uint64(result))
    }
    C.factorial(25, &result)
    if result == 0 {
        fmt.Println("Факториал 25: ошибка (переполнение)")
    } else {
        fmt.Printf("Факториал 25: %d\n", uint64(result))
    }
}
