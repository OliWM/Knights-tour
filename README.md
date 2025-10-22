Knight's tour using a simply greedy algorithm picking first legal move from a predefined list of 8 xy movement combinations.
With headerfile and docs (doxygen)


## Compile and run
To compile quick and dirty with clang just

```bash
#for macOs/Linux
clang -std=gnu2y -g -o main src/main.c
```
or
```bash
#for Windows (I think this is how)
clang -std=gnu2y -g -o main.exe src/main.c
```

And then run
```bash
#for macOs/Linux
./main
```
Or
```cmd
#for Windows (I think this is how)
main.exe
```

## Flowchart
Flowchart of the simple approach a human would take if not trying to figure out the optimal solution:
![Flowchart of human approach](https://imgur.com/a/gaBg73t)

Simple flowchart of our programme
![Flowchart of greedy knight's approach](https://imgur.com/a/3EwRRax)
