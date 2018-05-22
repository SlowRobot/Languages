package main

import "fmt"

type Random struct {
    i int
    b bool
}

func main() {

    fmt.Println("Slices")
    prime := [6]int{2, 3, 5, 7, 11, 13}
    var p []int = prime[1:4]
    fmt.Println(prime)
    fmt.Println(p)

    fmt.Println()
    fmt.Println("Radom Declarations")
    q := []int{2, 3, 5, 7, 11, 13}
    fmt.Println(q)

    r := []bool{true, false, true, true, false, true}
    fmt.Println(r)

    s := []Random{
        {2, true},
        {3, false},
        {5, true},
        {7, true},
        {11, false},
        {13, true},
    }
    fmt.Println(s)

    fmt.Println()
    fmt.Println("Slice and Dice")
    t := []int{2, 3, 5, 7, 11, 13}
    fmt.Println(t)

    t = t[:]
    fmt.Println(t)

    t = t[1:4]
    fmt.Println(t)

    t = t[:2]
    fmt.Println(t)

    t = t[1:]
    fmt.Println(t)
}