# rtt

[Rotate by x](https://en.wikipedia.org/wiki/ROT13) command line tools.

All written to by in a style similar to [atw](https://news.ycombinator.com/item?id=39031814).

## Tools:

_Note:_ all rotates work only for ascii!

```
13 -> "original" rotate => rotateschars by 13 ([A-Za-z])
5 -> number rotate => rotates numbers by 5 ([0-9])
47 -> "total" rotat => rotates everything char ([!-~])

```

## Compile:

```bash
$ cc -Os -o13.exe src/13.c -w
$ cc -Os -o5.exe src/5.c -w
$ cc -Os -o47.exe src/47.c -w
```

## Test:

```bash
$ echo "The Quick Brown Fox Jumps Over The Lazy Dog" | ./13
Gur Dhvpx Oebja Sbk Whzcf Bire Gur Ynml Qbt

$ echo "The Quick Brown Fox Jumps Over The Lazy Dog" | ./13 | ./13
The Quick Brown Fox Jumps Over The Lazy Dog

$ echo "0123456789" | ./5
5678901234

$ echo "0123456789" | ./5 | ./5
0123456789

$ echo "The Quick Brown Fox Jumps Over The Lazy Dog." | ./47
%96 "F:4< qC@H? u@I yF>AD ~G6C %96 {2KJ s@8]

$ echo "The Quick Brown Fox Jumps Over The Lazy Dog." | ./47 | ./47
The Quick Brown Fox Jumps Over The Lazy Dog.
```

## Further work:

- Trying to remove `#include`
- Add `typedef`'s
- Add some helper `#define`'s
