Here is a TypeScript solution for the problem:

```typescript
function findSubsets(input: string): string[] {
    let array: string[] = [];
    for (let i = 0; i < input.length; i++) {
        for (let j = i + 1; j <= input.length; j++) {
            array.push(input.slice(i, j));
        }
    }
    return array.sort();
}

console.log(findSubsets("abc"));
```

This program will find all subsets of a string and sort them lexicographically. It uses a nested loop to generate all possible substrings of the input string, adds them to an array, and then sorts the array. The sorted array is then returned. The `console.log` statement at the end is used to print the result to the console.