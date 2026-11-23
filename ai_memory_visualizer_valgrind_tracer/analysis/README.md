AI Memory Visualizer + Valgrind Tracer

Introduction & Context
By this point in the module, you have already used pointers, dynamic memory, and recursion. However, using memory-related features in C is not the same as understanding how memory actually behaves at runtime.

Most critical C bugs are not caused by complex syntax. They are caused by incorrect assumptions about:

Where data lives (stack vs heap)
How long that data remains valid
Which pointer “owns” which memory
What happens when those assumptions are wrong
This project is designed to expose and correct those assumptions.

You will analyze small C programs that intentionally contain memory leaks, invalid accesses, aliasing issues, and crashes. Your task is not simply to observe that something is wrong, but to explain precisely why it is wrong, using concrete reasoning about memory layout and lifetime.

Artificial Intelligence tools are allowed and encouraged — but only as analysis assistants. AI explanations are often plausible but incomplete or incorrect when it comes to low-level memory behavior. Part of this project is learning to detect and correct AI mistakes, not to rely on them blindly.

If you finish this project still thinking “Valgrind says it’s wrong but I don’t really know why”, then the project has failed.

Learning Objectives
After completing this project, you should be able to:

Describe stack and heap memory behavior explicitly

Identify stack frames, local variables, and their lifetimes.
Identify heap allocations, ownership, and deallocation responsibility.
Track pointer aliasing and memory ownership

Explain when multiple pointers refer to the same memory.
Determine which pointer is responsible for freeing memory (and when).
Interpret Valgrind output accurately

Distinguish between memory leaks, invalid reads/writes, and use-after-free.
Map Valgrind diagnostics to specific lines of code and memory states.
Explain segmentation faults deterministically

Identify the invalid memory access that caused the crash.
Explain the full causal chain from code → memory misuse → fault.
Use AI critically and professionally

Generate memory explanations and diagrams with AI assistance.
Identify inaccuracies, omissions, or incorrect assumptions in AI output.
Correct those errors using your own reasoning.
Communicate memory analysis clearly

Produce structured, technical explanations using correct terminology.
Avoid vague statements such as “it crashes because the pointer is wrong”.
If you cannot explain a memory bug without running the program again, your understanding is incomplete.

Resources
You are expected to consult documentation and external references as part of the work.

Required
Valgrind User Manual https://valgrind.org/docs/manual/manual.html

CERT C Coding Standard – Memory Management (selected sections) [https://cmu-sei.github.io/secure-coding-standards/sei-cert-c-coding-standard/rules/memory-management-mem/mem30-c/)

Recommended
Compiler warnings documentation (-Wall, -Wextra, -Werror)
Articles and references on:
Undefined behavior in C
Stack vs heap lifetime
Use-after-free and dangling pointers
AI Tools
Any LLM-based assistant is allowed.
All AI usage must be documented and reviewed critically.
AI explanations are considered hypotheses, not ground truth.
Using AI to replace reasoning rather than support it will negatively affect your evaluation.

To complete the tasks in this projects you'll need to download the following repository with the working files:

Download the zip from GitHub

IMPORTANT: Upload only the files in the analysis directory to the required repository, as stated in each task.

What’s inside
.
├── README.md
├── programs/
│   ├── Makefile
│   ├── stack_example.c        # for memory visualizer task (mandatory)
│   ├── heap_example.c         # for memory visualizer (optional) and memory tracer (mandatory) task
│   ├── aliasing_example.c     # for memory visualizer (mandatory) and memory tracer (mandatory) task
│   └── crash_example.c        # for crash report task (mandatory)
└── analysis/
    └── .gitkeep               # Working directory
Build flags
The Makefile uses:

-Wall -Wextra -Werror -pedantic -std=gnu89 -g