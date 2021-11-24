main :
#aff2
li $9 5
#aff1
move $8 $9
#aff2
li $9 4
#slt
slt $9 $9 $8
#A
beqz $9 else
#write
move $4 $8
li $2 1
syscall
#B
j fin
else :
#aff2
li $9 12
#write
move $4 $9
li $2 1
syscall
#C
fin :
#exit
li $v0 10
syscall
