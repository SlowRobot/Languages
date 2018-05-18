package main

import "fmt"

func main() {

    extend()

    defer fmt.Println("World")

    fmt.Printf("Hello ")
}

func extend() {
    fmt.Println("Counting")

    for i := 0; i < 10; i++ {
        defer fmt.Println(i)
    }

    fmt.Println("Done")
}