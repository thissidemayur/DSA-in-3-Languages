import readline from "readline";

// get user input
export function GetUserInputInArray(arr, size) {
  // : Creates an interface that reads from process.stdin (standard input) and writes to process.stdout (standard output).
  const rl = readline.createInterface({
    input: process.stdin, // standard input (keyboard)
    output: process.stdout, // standard output (console)
  });

  //   rl.question(): Prompts the user for input. The callback function receives the user's input as a parameter when they press Enter.
  console.log("Enter the input for array");
  for (let i = 0; i < size; i++) {
    rl.question(_, (element) => {
      arr.push(element);
    });
  }
  //Closes the readline interface after the input is processed.
  rl.close();
}

export function PrintArray(arr) {
  console.log("Array is printing: ...");
  for (let i = 0; i < arr.len; i++) {
    console.log(arr[i], " ");
  }
  console.log("\n\n");
}

let arr = [1, 2, 3, 4, 56, 45, 78, 5, 43];
PrintArray(arr);

let arr2 = [];
let arrSize;
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter size of array: ", (size) => {
  arrSize = size;
});
GetUserInputInArray(arr2, arrSize);
PrintArray(arr2);

console.log(`NOTE
    
1. JavaScript handles primitive types (such as number, string, boolean, undefined, null, and symbol) by value and objects (including arrays and functions) by reference.

2.
`);
