package main

import "fmt"

func main() {

    var s []int
    t := [6]int{1, 2, 3}
    u := [6]int{}
    fmt.Println(s, len(s), cap(s))
    fmt.Println(t, len(t), cap(t))
    if s == nil {
        fmt.Println("S is Nil!")
    }
    test := &t[0]
    if test == nil {
        fmt.Println("T is Nil!")
    }
    test = &u[0]
    if test == nil {
        fmt.Println("U is Nil!")
    }

}