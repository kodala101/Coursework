main:
 li $v0 5
 syscall
 move $v1 $v0
 li $a0 0
 li $a1 1
for:
 bgt $a1 $v1 out_for
 li $v0 5
 syscall
 addi $a1 $a1 1
 while:
  li $a2 10
  div $v0 $a2
  mflo $v0
  mfhi $a3
  add $a0 $a0 $a3
  bnez $v0 while 
 j for
out_for:
 li $v0 1
 syscall
 li $v0 10
