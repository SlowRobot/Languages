package main

import (
    "fmt"
    "math"
)

func sqrt(x float64) float64 {
    var z float64 = 1
    for abs(z*z - x) > 0.00000001 {
        z -= (z*z - x) / (2*z)
    }
    return z
}

func abs(x float64) float64 {
    if x < 0 {
        return -x
    }
    return x
}

func main() {
    fmt.Println(math.Sqrt(2))
    fmt.Println(sqrt(2))
}