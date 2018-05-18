package main

import(
    "fmt"
    "math"
)

func sqrt(x float64) string {
    if(x < 0) {
        return sqrt(-x) + "i"
    }
    return fmt.Sprint(math.Sqrt(x))
}

func abs(x float64) string {
    if x < 0 {
        return abs(-x)
    }
    return fmt.Sprint(x)
}

func main() {
    fmt.Println(sqrt(2), sqrt(-4))
    fmt.Println(abs(2), abs(-4))
}