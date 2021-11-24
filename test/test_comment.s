main :
#aff2
li $11 3
#aff1
move $10 $11
#aff2
li $11 4
#aff1
move $9 $11
#add
add $11 $10 $9
#aff2
li $11 8
#add
add $11 $11 $11
#aff1
move $8 $11
#write
move $4 $8
li $2 1
syscall
#exit
li $v0 10
syscall
