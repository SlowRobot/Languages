package main

import "fmt"

type Vertex struct {
    x int
    y int
}

func main() {
    v := Vertex{1, 2}
    fmt.Println(v)
    v.x = 4
    fmt.Println(v)
    p := &v
    p.y = 6
    fmt.Println(v)
}