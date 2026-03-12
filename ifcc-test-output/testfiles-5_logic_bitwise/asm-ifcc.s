.globl main
main:
    pushq %rbp
    movq %rsp, %rbp
    subq $16, %rsp
    movl $10, %eax
    movl %eax, -4(%rbp)
    movl $3, %eax
    movl %eax, -8(%rbp)
    movl -4(%rbp), %eax
    pushq %rax
    movl -8(%rbp), %eax
    movl %eax, %ecx
    popq %rax
    cmpl %ecx, %eax
    setg %al
    movzbl %al, %eax
    movl %eax, -12(%rbp)
    movl -4(%rbp), %eax
    pushq %rax
    movl -8(%rbp), %eax
    movl %eax, %ecx
    popq %rax
    andl %ecx, %eax
    movl %eax, -16(%rbp)
    movl -12(%rbp), %eax
    pushq %rax
    movl -16(%rbp), %eax
    popq %rdx
    addl %edx, %eax
    jmp end_main
end_main:
    movq %rbp, %rsp
    popq %rbp
    ret
