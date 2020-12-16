# 16Keypad.cpp 
4x4 Matrix key pad connected to microcontroller FRDM-Kl25Z  and a seven segment Display.
## Description 
4X4 Matrix Key Pad display numeric value on a 7 segment display when pushed by user. 
### Connection
The FRDM-Kl25Z   is connected to the 4X4 Matrix Key Pad.
* +----------------------+ 
*  FRDM-Kl25Z
* +----------------------+  
* --------   ROWS

* |PTE4|   R-1( 1,2,3,A)
* |PTE3|	 R-2 (4,5,6,B)
* |PTE2|	 R -3 (7,8,9,C)
* |PTB11|	 R-4 (*,0,#,D)
* --------   COLS
* |PTB10|  C- 1 (1,4,7,*)
* |PTB9|   C-2 (2,5,8,0)
* |PTB8|   C—3 (3,6,9,#)
* |PTB7|   C-4 (*,0,#,
* +-----------------------+
