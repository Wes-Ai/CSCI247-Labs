

        .global main

        .text
main:
        # Write intro message
        mov     $1, %rax
        mov     $1, %rdi
        mov     $intromsg, %rsi
        mov     $23, %rdx
        syscall

        # Read user input, store in buf
        mov     $0, %rax           # set SYS_READ as SYS_CALL value
        mov     $0, %rdi        # set rdi to 0 to indicate a STDIN file descriptor
        mov     $10, %rdx       # set size_t count to 1 for one char
        mov     $buf, %rsi           # buf = result
        syscall


        # Write result message
        mov     $1, %rax
        mov     $1, %rdi
        mov     $resultmsg, %rsi
        mov     $18, %rdx
        syscall

        # Print user's number
        mov     $1, %rax
        mov     $1, %rdi
        mov     $buf, %rsi
        mov     $10, %rdx
        syscall

        mov     $0, %eax               # return 0
        ret

        .data
buf:    .zero 100

intromsg:   .ascii  "Please enter a number: "

resultmsg:  .ascii  "You have entered: "
