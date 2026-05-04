# BigInt (C++)

Custom BigInt implementation in C++ using `vector<int>` (base = 1e9).

## Features
- Construct from string
- Copy constructor
- Input (`cin >>`)
- Output (`cout <<`)
- Internal storage in chunks of 9 digits

## Example

```cpp
BigInt a("123456789123456789");
BigInt b;

cin >> b;

cout << a << endl;
cout << b << endl;
```
Run
```g++ main.cpp -o main
./main```

Next
operator+
operator==