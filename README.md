# compilo version 3
## *Auteur:JIN Xia*

*Logical Structure*
This compiler adopts an architectural approach consisting of *Static Semantic Scanning* → *Intermediate Code Generation* → *Backend Instruction Mapping*.

- Static Semantic Scanning
Responsible for: Pre-scanning and function registration, scope differentiation, symbol table allocation, and basic error detection.

- Intermediate Code Generation
Responsible for: Control Flow Graph (CFG) construction, instruction translation, and parameter passing management.

- Backend Instruction Mapping
Responsible for: Register management and assembly template generation.

**existing functions:**
- op '!'|'~'|'-', '*'|'/'|'%', '+'|'-', '<<'|'>>', '<'|'>'|'<='|'>=', '=='|'!=','&' |'^'|'|'|'&&'|'||'
- array (def and use)
- if-else
- scope
- while
- function

*use testfiles/10_function.c to use them all*