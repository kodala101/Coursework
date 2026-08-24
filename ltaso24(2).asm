main:
 li $v0 5
 syscall
 move $v1 $v0
 li $a1 0
 li $a2 -4
 mul $a2 $a2 $v1
 add $sp $sp $a2
for:
 bge $a1 $v1 out_for
 li $v0 5
 syscall
 sw $v0 0($sp)
 addi $sp $sp 4
 addi $a1 $a1 1
 j for
out_for:
 li $a2 -4
 mul $a2 $a2 $v1
 add $sp $sp $a2
 
 li $t0 0
 lw $t2 0($sp)
outer_for:
 beq $t0 $v1 done
 mul $s1 $t0 4
 add $s1 $s1 $sp
 move $t7 $s1
 move $t1 $t0
inner_for:
 beq $t1 $v1 out_inner_for
 li $t3 4
 mul $t4 $t3 $t1
 add $t4 $t4 $sp
 lw $t5 0($t4)

 bgt $t5 $t2 nothing
 move $t2 $t5
 addi $t1 $t1 1
 move $t7 $t4
 j inner_for
nothing:
 addi $t1 $t1 1
 j inner_for

out_inner_for:
 li $t4 4
 mul $t4 $t4 $t0
 add $t4 $t4 $sp
 lw $t6 0($t4)
 
 sw $t6 0($t7)
 sw $t2 0($t4) 
 
 addi $t0 $t0 1
 
 mul $t7 $t0 4
 add $t7 $t7 $sp
 lw $t2 0($t7) 
 
 j outer_for
 
done:
 li $a1 0
print_for:
 bge $a1 $v1 exit
 lw $a0 0($sp)
 
 li $v0 1
 syscall
 
 li $a0 32
 li $v0 11
 syscall
 
 addi $sp $sp 4
 addi $a1 $a1 1
 j print_for
exit:
 li $v0 10
 syscall