# Kimberly Agraan CS219 Project2
## How to Use
Compile using ./gcc operator.c -o start

To run the code use ./start

## More Machine Operations
From the last project, the program simulated how a machine does an add operation. In this program it added 8 of the other operations. The beginning will read for the operations and compare them to each defined command. If it matches the defined commands it'll perform the operations. The additional operations include: 

**ADD** operation reads the two hex values and adds the second value to the first value in its binary conversion but returns the hex value of the sum.

**AND** operation, this operation will read the hex values in the given txt file and it will compare the operands using the bitwise AND by converting the hex numbers to binary, check if both bits are 1 or not, if not the result would be a 0. 

**ASR** operation is the arithmetic shift right operation where the first value in the txt file will be a hex value then a value of how many places to shift the first value. Since it is arithmetic it will keep the msb and shift everything to the right.

**LSR** and **LSL** operations are logical shifiting operations where the msb gets shifted, in right shfiting the msb becomes 0 but in the left shift lsb becomes 0. 

**NOT** operation the value in the file will be turned into a binary number and each bit will be inverted, the returned result will be the hex value of all the inverted bits. 
 
**OR** operation will read the hex values, use the binary converions and compare each bit to each other, if the bits are both 0 then it will be 0, otherwise the result is a 1.
 
**SUB** operation will read the two hex values and take the binary conversion and subtract the second operand value from the first one.

**XOR** operation will read the hex values, use the binary converions and compare each bit to each other, if the bits are both 0 or 1 then it will be 0, otherwise the result is a 1.


## Updating Flags
 But there are more than the add operation, 8 other operations are also used along with the variation of that operation changing the status flag of the result. Operations with an S at the end make sure the instruction will update the flag if needed. The "S" in an opcode means the operation will perform as usual but also update the status flags based on the result. 
