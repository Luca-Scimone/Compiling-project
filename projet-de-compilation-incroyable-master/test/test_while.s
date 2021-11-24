main :
#aff2
li $9 5
#aff1
move $8 $9
#D
debutwhile :
#aff2
li $9 10
#slt
slt $9 $8 $9
#E
beqz $9 finwhile
#aff2
li $9 1
#add
add $9 $8 $9
#aff1
move $8 $9
#F
j debutwhile
finwhile :
#write
move $4 $8
li $2 1
syscall
#exit
li $v0 10
syscall
