oui :
#aff2
li $11 1
main :
jal oui
#write
move $4 $11
li $2 1
syscall
#exit
li $v0 10
syscall
