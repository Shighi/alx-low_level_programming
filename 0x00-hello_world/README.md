# C File Preprocessor Script

This project contains a script to run a C file through the preprocessor and save the result into another file.

## Script: 0-preprocessor

### Description

The script `0-preprocessor` takes a C file, processes it through the preprocessor, and saves the output to a file named `c`.

### Usage

1. Export the C file name to the `CFILE` variable:

```bash
export CFILE=main.c
```

2. Run the script:

```bash
./0-preprocessor
```

3. Check the output in the file `c`:

```bash
tail c
```

### Example

```bash
export CFILE=main.c
./0-preprocessor
tail c
```
