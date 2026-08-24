main:
    li      $v0, 5
    syscall
    move    $s2, $v0

    li      $v0, 5
    syscall
    addi    $s3, $v0, -1

    li      $v0, 5
    syscall
    addi    $s4, $v0, -1

    li      $s5, 0

    li      $a0, 64
    li      $v0, 9
    syscall
    move    $s6, $v0

    li      $a0, 0
    jal     svla

    move    $a0, $s5
    li      $v0, 1
    syscall

    li      $v0, 10
    syscall

isFree:
    li      $v0, 1
    li      $t0, 0
    move    $t4, $s6

loop:
    bge     $t0, $a1, isFreeEnd

    sll     $t1, $t0, 2
    add     $t1, $t4, $t1
    lw      $t2, 0($t1)

    beq     $t2, $a0, isFreeFalse

    sub     $t3, $t2, $a0
    bgez    $t3, done
    neg     $t3, $t3
done:
    sub     $t5, $a1, $t0

    beq     $t3, $t5, isFreeFalse

    addi    $t0, $t0, 1
    j       loop

isFreeFalse:
    li      $v0, 0

isFreeEnd:
    jr      $ra

svla:
    addi    $sp, $sp, -12
    sw      $ra, 8($sp)
    sw      $s0, 4($sp)
    sw      $s1, 0($sp)

    move    $s0, $a0

    beq     $s0, $s2, baseSvla

    beq     $s0, $s4, svlaForced

svlaNormal:
    li      $s1, 0
svlaNloop:
    bge     $s1, $s2, exit

    move    $a0, $s1
    move    $a1, $s0
    jal     isFree

    beqz    $v0, svlaNnext

    move    $t0, $s6
    sll     $t1, $s0, 2
    add     $t0, $t0, $t1
    sw      $s1, 0($t0)

    addi    $a0, $s0, 1
    jal     svla

svlaNnext:
    addi    $s1, $s1, 1
    j       svlaNloop

svlaForced:
    move    $a0, $s3
    move    $a1, $s0
    jal     isFree

    beqz    $v0, exit

    move    $t0, $s6
    sll     $t1, $s0, 2
    add     $t0, $t0, $t1
    sw      $s3, 0($t0)

    addi    $a0, $s0, 1
    jal     svla
    j       exit

baseSvla:
    addi    $s5, $s5, 1
    j       exit

exit:
    lw      $s1, 0($sp)
    lw      $s0, 4($sp)
    lw      $ra, 8($sp)
    addi    $sp, $sp, 12
    jr      $ra