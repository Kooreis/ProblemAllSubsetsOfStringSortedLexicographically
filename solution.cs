```javascript
function getSubsets(string) {
    let array = Array.from(string);
    let base = [''];
    let results = array.reduce((previous, element) => {
        return previous.concat(previous.map(value => {
            return value + element;
        }));
    }, base);
    return results.sort();
}

console.log(getSubsets('abc'));
```