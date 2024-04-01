# Memory-Management-and-Address-Translation
Program that takes a user input Logical address and translates it to its associated physical address.
This program takes a user inputed logical address and converts it to the associated physical address with page number and offset. Then it prints the page number and offset back to the user. It gets the page number by dividing the logical adress by the size of each page. and the offset by using & 0xFF. This only grabs the two LSB. if the logical address input is to large and there is no physical address possible for the address the program will print "invalid page number".

Apon compiling the user will be prompted to input a logical address. The address can be input in 0x3A7F or 3A7F format.
