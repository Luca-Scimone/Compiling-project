main :
#aff2
li $11 10
#aff1
move $8 $11
#aff2
li $11 0
#aff1
move $10 $11
#aff2
li $11 2
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
#D
debutwhile2 :
#aff2
li $11 4
#slt
slt $12 $10 $11
#E
beqz $12 finwhile2
#D
debutwhile3 :
#aff2
li $13 10
#aff1
move $15 $13
#infe
addi $15 $15 1
slt $14 $9 $15
#E
beqz $14 finwhile3
#aff2
li $16 2
#add
add $17 $9 $16
#aff1
move $9 $17
#slt
slt $11 $8 $9
#A
beqz $11 else4
#mul
mul $12 $8 $9
#aff1
move $8 $12
#B
j fin4
else4 :
#C
fin4 :
#aff2
li $11 1
#add
add $12 $10 $11
#aff1
move $10 $12
#F
j debutwhile3
finwhile3 :
#F
j debutwhile2
finwhile2 :
#aff2
li $11 4
#slt
slt $12 $11 $10
#A
beqz $12 else5
#write
move $4 $8
li $2 1
syscall
#B
j fin5
else5 :
#C
fin5 :
#exit
li $v0 10
syscall
