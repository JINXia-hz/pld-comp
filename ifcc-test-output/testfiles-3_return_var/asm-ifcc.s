.globl main
main:
    pushq %rbp
    movq %rsp, %rbp
    movl $8, %eax
    movl %eax, -4(%rbp)
    movl -4(%rbp), %eax
    jmp end_main
end_main:
    popq %rbp
    ret
