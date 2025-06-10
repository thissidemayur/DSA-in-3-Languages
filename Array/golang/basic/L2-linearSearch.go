package main

func LinearSearch(arr []int, searchELement int) (int, int) {
	for index, value := range arr {
		if value == searchELement {
			return index, 1
		}
	}

	return 0, 0 //falsy value of int is 0
}
