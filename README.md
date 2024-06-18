## Compiler for VesPA Architecture: A Modular Approach

This repository houses a compiler specifically designed to target the VesPA architecture resulting from a team project of 20 individuals. I had the privilege of leading a smaller group of 8 within this larger project.
The compiler follows a modular structure, dividing the compilation process into distinct front-end, middle-end, and back-end phases. This approach enhances maintainability, flexibility, and allows for easier optimization of each stage.

### Project Overview

- **Target Architecture:** VesPA (a custom architecture, likely for education/research).
- **Language:** The compiler likely targets a simplee strong-typed C language, it only supports one file and has no linker.
- **Modular Design:**
    - **Front-end:** Lexical analysis, parsing, abstract syntax tree (AST) construction.
    - **Middle-end:** Type checking, semantic analysis, constant folding
    - **Back-end:** Instruction selection, scheduling, register allocation, code generation (`.coe` files).

### Front-End (Flex & Bison)

- **Lexical Analysis (Flex):** Tokenizes the input source code, recognizing keywords, identifiers, literals, operators, etc.
- **Parsing (Bison):** Constructs an AST based on the grammar of the source language, ensuring syntactical correctness.
- **AST Construction:** Builds a tree-like representation of the source code, capturing its structure and relationships between elements.

### Middle-End (Type Checking, Optimization)

- **Semantic Analysis:**  Performs deeper analysis, checking for undefined variables, invalid function calls, etc.
- **Type Checking:** Verifies the type safety of the program, ensuring that operations are performed on compatible data types.
- **Optimization:** Applies transformations to the IR to improve code efficiency and performance.

### Back-End (Instruction Scheduling, Assembly, .coe)

- **Instruction Selection:** Maps the AST to the corresponding VesPA assembly instructions.
- **Instruction Scheduling:** Rearranges instructions to optimize pipeline utilization and mitigate hazards specific to the VesPA architecture.
- **Register Allocation:** Assigns variables and temporaries to a limited set of physical registers, according to VesPA ABI.
- **Assembly Code Generation:** Produces VesPA assembly code.
- **.coe File Generation:** Creates `.coe` (Coefficient) files, a binary format used to initialize block RAM in FPGAs, containing the data code for the VesPA architecture.

### Key Challenges and Solutions

- **Hazard Mitigation (Pipeline):** Careful instruction scheduling to prevent data hazards on the VesPA pipeline.

### Repository Contents

- **Source Code:** Flex/Bison specifications, C implementation of compiler phases.
- **Test Suite:** Input programs and expected outputs for various language features and optimizations.
- **Documentation:** Detailed explanations of compiler design, implementation choices, and optimizations.
