# Introduction to Bitwise Operators

As name suggests, it does bitwise manipulation

1) & = AND
2) | = OR
3) ~ = NOT
4) << = Left Shift
5) >> = Right Shift
6) ^ = XOR

## Bitwise AND (&) Operator

Result of AND is 1 when both bits are 1

7 & 4 = 4
0111 & 0100 = 0100

### Truth Table

| A | B | A&B |
|---|---|-----|
| 0 | 0 | 0   |
| 0 | 1 | 0   |
| 1 | 0 | 0   |
| 1 | 1 | 1   |

## Bitwise OR (|) Operator

Result of OR is 0 when both bits are 0

7 & 4 = 4
0111 | 0100 = 0111

### Truth Table

| A | B | A&B |
|---|---|-----|
| 0 | 0 | 0   |
| 0 | 1 | 1   |
| 1 | 0 | 1   |
| 1 | 1 | 1   |

## Bitwise NOT (~) Operator

Result of NOT is 0 when bit is 1 and 1 when bit is 0

~7 = 8
~0111 = 1000

### Truth Table

| A | ~A  |
|---|-----|
| 0 | 1   |
| 1 | 0   |

## Left Shift (<<) Operator

First operand << Second operand

First Operand: Whose bits get left shifted
Second Operand: Decides the number of places to shift the bits

Trailing positions are filled with zeros

3 = 00000011
3<<1 = 00000110 = 6

Each left shift multiplies the original number by 2

## Right Shift (>>) Operator

First operand << Second operand

First Operand: Whose bits get right shifted
Second Operand: Decides the number of places to shift the bits

Leading positions are filled with zeros

3 = 00000011
3>>1 = 00000001 = 1

Each right shift divides the original number by 2

## XOR (>>) Operator

### Truth Table

Either A is 1 or B is 1 then the output is 1 but when both A and B are 1, then output is 0.

| A | B | A XOR B |
|---|---|---------|
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |