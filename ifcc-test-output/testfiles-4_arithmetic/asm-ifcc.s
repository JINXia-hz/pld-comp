.globl main
main:
    pushq %rbp
    movq %rsp, %rbp
    subq $16, %rsp
    movl $10, %eax
    movl %eax, -4(%rbp)
    movl $5, %eax
    movl %eax, -8(%rbp)
    movl $2, %eax
    movl %eax, -12(%rbp)
    movl -4(%rbp), %eax
    pushq %rax
    movl -8(%rbp), %eax
    popq %rdx
    addl %edx, %eax
    pushq %rax
    movl -12(%rbp), %eax
    movl %eax, %ecx
    popq %rax
    imull %ecx, %eax
    pushq %rax
    movl -4(%rbp), %eax
    pushq %rax
    movl -8(%rbp), %eax
    movl %eax, %ecx
    popq %rax
    cltd
    idivl %ecx
    popq %rdx
    negl %eax
    addl %edx, %eax
    movl %eax, -16(%rbp)
    movl -16(%rbp), %eax
    jmp end_main
end_main:
    movq %rbp, %rsp
    popq %rbp
    ret
