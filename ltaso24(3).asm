main:
    addi $sp, $sp, -200
    move $s0, $sp     
    addi $s1, $sp, 100      

    li $v0, 8
    move $a0, $s0
    li $a1, 100             
    syscall
    
    move $t0, $s0
    li $s2, 0               
lenS1:
    lb $t1, 0($t0)
    beqz $t1, endLenS1
    beq $t1, 10, stripS1   
    addi $s2, $s2, 1        
    addi $t0, $t0, 1
    j lenS1
stripS1:
    sb $zero, 0($t0)        
endLenS1:
    li $v0, 8
    move $a0, $s1
    li $a1, 100             
    syscall
    
    move $t0, $s1
    li $s3, 0               
lenS2:
    lb $t1, 0($t0)
    beqz $t1, endLenS2
    beq $t1, 10, stripS2   
    addi $s3, $s3, 1       
    addi $t0, $t0, 1
    j lenS2
stripS2:
    sb $zero, 0($t0)        
endLenS2:
    addi $s4, $s3, 1        
    addi $t0, $s2, 1        
    
    mul $s5, $s4, $t0       
    mul $a2, $s5, -4        
    add $sp, $sp, $a2      
    move $s7, $sp           
    
    li $t0, 0               
outerFor:
    bgt $t0, $s2, outOuterFor 
    li $t1, 0              
innerFor:
    bgt $t1, $s3, outInnerFor 
    
    mul $t2, $t0, $s4
    add $t2, $t2, $t1
    mul $t2, $t2, 4
    add $t2, $s7, $t2       
    
    beqz $t0, setZero
    beqz $t1, setZero
    
    addi $t4, $t0, -1
    add $t3, $s0, $t4
    lb $t5, 0($t3)          
    
    addi $t4, $t1, -1
    add $t3, $s1, $t4
    lb $t6, 0($t3)          
    
    bne $t5, $t6, elseMax
    
    addi $t4, $t0, -1       
    mul $t4, $t4, $s4      
    addi $t8, $t1, -1       
    add $t4, $t4, $t8       
    mul $t4, $t4, 4
    add $t4, $s7, $t4       
    lw $t9, 0($t4)
    addi $t9, $t9, 1
    sw $t9, 0($t2)         
    j continueInner
    
setZero:
    sw $zero, 0($t2)
    j continueInner
    
elseMax:
    addi $t4, $t0, -1
    mul $t4, $t4, $s4
    add $t4, $t4, $t1
    mul $t4, $t4, 4
    add $t4, $s7, $t4
    lw $t8, 0($t4)         
    
    mul $t4, $t0, $s4
    addi $t9, $t1, -1
    add $t4, $t4, $t9
    mul $t4, $t4, 4
    add $t4, $s7, $t4
    lw $t9, 0($t4)          
    
    bgt $t8, $t9, useT8
    sw $t9, 0($t2)         
    j continueInner
useT8:
    sw $t8, 0($t2)          

continueInner:
    addi $t1, $t1, 1
    j innerFor
    
outInnerFor:
    addi $t0, $t0, 1
    j outerFor
outOuterFor:

    mul $t2, $s2, $s4
    add $t2, $t2, $s3
    mul $t2, $t2, 4
    add $t2, $s7, $t2
    lw $t8, 0($t2)          
    
    addi $a2, $t8, 1
    sub $sp, $sp, $a2       
    move $s6, $sp           
    
    add $t2, $s6, $t8
    sb $zero, 0($t2)
    
    move $t0, $s2           
    move $t1, $s3           
    move $t2, $t8           

whileLoop:
    blez $t0, outWhile
    blez $t1, outWhile
    
    addi $t4, $t0, -1
    add $t3, $s0, $t4
    lb $t5, 0($t3)
    
    addi $t4, $t1, -1
    add $t3, $s1, $t4
    lb $t6, 0($t3)
    
    bne $t5, $t6, whileElseIf
    
    addi $t2, $t2, -1      
    add $t7, $s6, $t2      
    sb $t5, 0($t7)
    
    addi $t0, $t0, -1        
    addi $t1, $t1, -1       
    j whileLoop

whileElseIf:
    addi $t4, $t0, -1
    mul $t4, $t4, $s4
    add $t4, $t4, $t1
    mul $t4, $t4, 4
    add $t4, $s7, $t4
    lw $t8, 0($t4)
    
    mul $t4, $t0, $s4
    addi $t9, $t1, -1
    add $t4, $t4, $t9
    mul $t4, $t4, 4
    add $t4, $s7, $t4
    lw $t9, 0($t4)
    
    ble $t8, $t9, whileElse
    addi $t0, $t0, -1       
    j whileLoop

whileElse:
    addi $t1, $t1, -1       
    j whileLoop

outWhile:
    li $v0, 4
    move $a0, $s6
    syscall
	
    li $v0, 11
    li $a0, 10              
    syscall

    addi $a2, $t8, 1
    add $sp, $sp, $a2
    
    mul $t0, $s5, 4
    add $sp, $sp, $t0
    
    addi $sp, $sp, 200