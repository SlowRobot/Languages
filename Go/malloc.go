package main

import "fmt"

func main() {

    a := make([]int, 5)
    printSlice("A", a)

    b := make([]int, 0, 5)
    printSlice("B", b)

    c := b[:2]
    printSlice("C", c)

    d := c[2:5]
    printSlice("D", d)

}

func printSlice(s string, x []int) {
    fmt.Printf("%s Len = %d and Cap = %d\n", s, len(x), cap(x))
}