package main

import "fmt"

func GetInputElementInArray(arr []int) []int {
	fmt.Println("Enter input element for Array")
	for index, _ := range arr {
		var element int
		fmt.Scanln(&element)
		arr[index] = element
	}
	fmt.Println("")
	return arr
}

func PrintArray(arr []int) {
	fmt.Println("Printing Array element: ")
	for _, value := range arr {
		fmt.Println(value, " ")
	}
	fmt.Println("")
}

func Note() {
	fmt.Println(`NOTE: 
	
1.In Go, arrays and slices are passed by reference by default (because they are reference types)
	
	`)
}
