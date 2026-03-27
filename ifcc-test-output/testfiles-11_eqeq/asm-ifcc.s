.globl compute
compute:
    pushq %rbp
    movq %rsp, %rbp
    subq $32, %rsp
.L_compute_0:
    movl %edi, %eax
    movl %eax, -4(%rbp)
    movl %esi, %eax
    movl %eax, -8(%rbp)
    movl -4(%rbp), %eax
    addl -8(%rbp), %eax
    movl %eax, -20(%rbp)
    movl -20(%rbp), %eax
    movl %eax, -12(%rbp)
    movl -4(%rbp), %eax
    subl -8(%rbp), %eax
    movl %eax, -24(%rbp)
    movl -24(%rbp), %eax
    movl %eax, -16(%rbp)
    movl -12(%rbp), %eax
    imull -16(%rbp), %eax
    movl %eax, -28(%rbp)
    movl -28(%rbp), %eax
    jmp .L_end_compute
    movl $0, %eax
    movl %eax, -32(%rbp)
    movl -32(%rbp), %eax
    jmp .L_end_compute
.L_end_compute:
    movq %rbp, %rsp
    popq %rbp
    ret
.globl main
main:
    pushq %rbp
    movq %rsp, %rbp
    subq $64, %rsp
.L_main_0:
    movl $10, %eax
    movl %eax, -28(%rbp)
    movl -28(%rbp), %eax
    movl %eax, -12(%rbp)
    movl -12(%rbp), %eax
    movl %eax, -8(%rbp)
    movl -8(%rbp), %eax
    movl %eax, -4(%rbp)
    movl $2, %eax
    movl %eax, -32(%rbp)
    movl -32(%rbp), %eax
    movl %eax, -16(%rbp)
    movl $10, %eax
    movl %eax, -36(%rbp)
    movl -16(%rbp), %eax
    addl -36(%rbp), %eax
    movl %eax, -40(%rbp)
    movl -40(%rbp), %eax
    movl %eax, -8(%rbp)
    movl -8(%rbp), %eax
    movl %eax, -4(%rbp)
    movl -4(%rbp), %eax
    movl %eax, %edi
    movl -12(%rbp), %eax
    movl %eax, %esi
    call compute
    movl %eax, -44(%rbp)
    movl -44(%rbp), %eax
    movl %eax, -20(%rbp)
    movl $2, %eax
    movl %eax, -48(%rbp)
    movl -20(%rbp), %eax
    addl -48(%rbp), %eax
    movl %eax, -52(%rbp)
    movl -52(%rbp), %eax
    movl %eax, -16(%rbp)
    movl -16(%rbp), %eax
    movl %eax, -12(%rbp)
    movl -12(%rbp), %eax
    movl %eax, -8(%rbp)
    movl -16(%rbp), %eax
    jmp .L_end_main
    movl $0, %eax
    movl %eax, -56(%rbp)
    movl -56(%rbp), %eax
    jmp .L_end_main
.L_end_main:
    movq %rbp, %rsp
    popq %rbp
    ret
