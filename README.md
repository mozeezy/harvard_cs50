### This is my journey along the Harvard Intro to Computer Science Course (CS50)

## Week 0

### Binary System

- In computing systems, binary is a scheme consisting of only the digits 0 or 1.
- The combination of these numbers is the basis for all computing operations
  > For example, 000 represents the number "0" in human language. 001 represents the number "1" in human language. 010 is the number "2" and so on. Each "0" and "1" in the binary code is called a "bit".
- To represent letters, we essentially use numbers to represent letters (hypothetically speaking, i.e. "A" is the number 1, "B" is the number 2, etc...). This is because computing systems use binary systems as the basis for its operation. 
  > In the real world, the letter "A" is the number "65" in human language which is "01000001" in binary (an 8-bit -- a byte).

### How do we differentiate between binaries representing numbers and letters?
- In that case, we would have different file formats.
  > For example, a Google docs file format would interpret the "0" and "1" as letters so it would display letters. an Excel spreadsheet file would interpret the "0" and "1" as numbers which would allow us to do mathematical operations.

### ASCII
- ASCII charts can be used to know the representation of letters by numbers.
  > Each character in ASCII is a "byte".
- Problem: we would only be limited to 256 characters in the English language ONLY!
- By adding more bits, we can support more languages and punctuations, and even emojis! This is the UNICODE encoding, which uses 16-bits instead of 8-bits.

