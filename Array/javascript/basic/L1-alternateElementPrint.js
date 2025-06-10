/*
Given an array arr[], the task is to print every alternate element of the array starting from the first element.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: 10 30 50
Explanation: Print the first element (10), skip the second element (20), print the third element (30), skip the fourth element(40) and print the fifth element(50).

Input: arr[] = [-5, 1, 4, 2, 12]
Output: -5 4 12
*/

// dyncamic Array (vector)
function printAlternativeElement(arr) {
  let result = [];
  for (let i = 0; i < arr.length; i += 2) {
    result.push(arr[i]);
  }
  return result;
}

const arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9];
const resultArr = printAlternativeElement(arr1);
console.log(resultArr.join(" "));
