.globl main
main:
    pushq %rbp
    movq %rsp, %rbp
    movl $42, %eax
    jmp end_main
end_main:
    popq %rbp
    ret
