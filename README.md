
### Install Dependencies

```
clib install 
```

or 

```
make deps 
```

### Compile Binary, Test, Clean Up

```
make install 
make test 
make clean 
make uninstall
```

### Install on machine
Change

```
DIRBIN = ./bin
```

### test.sh
Run 
```
make test
```

what is equivalent to
```
./test.sh
```

You might need to make it executable

```
chmod u+x test.sh
```