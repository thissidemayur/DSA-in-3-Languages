package main

/*
Given an array arr[], the task is to print every alternate element of the array starting from the first element.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: 10 30 50
Explanation: Print the first element (10), skip the second element (20), print the third element (30), skip the fourth element(40) and print the fifth element(50).

Input: arr[] = [-5, 1, 4, 2, 12]
Output: -5 4 12
*/

func PrintAlternateElement(arr []int) []int {

	result := make([]int, 0)
	for i := 0; i < len(arr); i += 2 {
		result = append(result, arr[i])
	}

	// for index, element := range arr {
	// 	if index%2 != 0 {
	// 		continue
	// 	} else {
	// 		result = append(result, element)
	// 	}
	// }

	//
	return result
}
