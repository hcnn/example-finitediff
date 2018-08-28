
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


### Result
Install it

```
make deps
make install test
```

This should be the result

```
x[ 0]: -0.6000 | gf(x): -0.0922 | gc(x): -0.0923 | gb(x): -0.0924
x[ 1]: -0.5000 | gf(x): -0.0768 | gc(x): -0.0769 | gb(x): -0.0770
x[ 2]: -0.4000 | gf(x): -0.0615 | gc(x): -0.0615 | gb(x): -0.0616
x[ 3]: -0.3000 | gf(x): -0.0461 | gc(x): -0.0462 | gb(x): -0.0462
x[ 4]: -0.2000 | gf(x): -0.0307 | gc(x): -0.0308 | gb(x): -0.0308
x[ 5]: -0.1000 | gf(x): -0.0153 | gc(x): -0.0154 | gb(x): -0.0155
x[ 6]:  0.0000 | gf(x):  0.0001 | gc(x):  0.0000 | gb(x): -0.0001
x[ 7]:  0.1000 | gf(x):  0.0155 | gc(x):  0.0154 | gb(x):  0.0153
x[ 8]:  0.2000 | gf(x):  0.0308 | gc(x):  0.0308 | gb(x):  0.0307
x[ 9]:  0.3000 | gf(x):  0.0462 | gc(x):  0.0462 | gb(x):  0.0461
x[10]:  0.4000 | gf(x):  0.0616 | gc(x):  0.0615 | gb(x):  0.0615
x[11]:  0.5000 | gf(x):  0.0770 | gc(x):  0.0769 | gb(x):  0.0768
x[12]:  0.6000 | gf(x):  0.0924 | gc(x):  0.0923 | gb(x):  0.0922
```

Clean Up
```
make clean uninstall
```
