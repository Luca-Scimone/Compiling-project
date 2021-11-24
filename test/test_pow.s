main :
#aff2
li $12 3
#aff1
move $11 $12
#aff2
li $12 4
#aff1
move $10 $12
#pow
li $12 1
beqz $10 fin1
move $12 $11
sub $10 $10 1
loop1 : blt $10 1 fin1
mul $12 $12 $11
sub $10 $10 1
b loop1
fin1 :
#aff1
move $9 $12
#write
move $4 $9
li $2 1
syscall
#exit
li $v0 10
syscall
