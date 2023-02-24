
; World, linux x86_64, nasm syntax



  section .rodata                 ; Begin read only data section

  hello: db "Hello, World",0x0a   ; String, 0x0a is \n

  hello_len equ $-hello           ; $ is current address, length is address after string - address of start of string



  section .text          ; begin code section

  global _start          ; export _start so the linker can see it



  _start:                ; program entry point

      mov rax, 1         ; write(2) syscall number

      mov rdi, 1         ; stdout

      mov rsi, hello     ; string address

      mov rdx, hello_len ; string length

      syscall            ; execute the write syscall



      mov rax, 60        ; exit(2) syscall number

      mov rdi, 0         ; exit status

      syscall            ; execute the exit syscall
