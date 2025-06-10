package main

import "fmt"

func main() {
	arr1 := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

	// // Ans1: print alternate element
	// result1 := PrintAlternateElement(arr1)
	// fmt.Printf("Ans1: %v \n", result1)
	// ---------------------------------------------------------------------------------------------------

	// Ans2: linear search
	var searchElement int
	fmt.Println("Enter element to search in array: ")
	fmt.Scanln(&searchElement)

	index, element := LinearSearch(arr1, searchElement)
	if element != 0 {
		fmt.Println("Element is present ! at index ", index)
	} else {
		fmt.Println("Element is not present!!")
	}
	// ---------------------------------------------------------------------------------------------------
}
