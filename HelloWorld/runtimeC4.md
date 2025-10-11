```mermaid
flowchart LR
    %% =============================
    %% 🧭 Your Computer's Runtime Universe
    %% =============================

    subgraph D["💾 [1] Disk (Storage)"]
        D1["📦 Your compiled program<br><b>hello.exe</b>"]
        D2["🧩 Filesystem<br>Organizes files, directories, metadata"]
        D3["⚙️ Disk Controller<br>Transfers data blocks using DMA"]
    end

    subgraph OS["🧠 [2] Operating System (Kernel Space)"]
        OS1["📂 Filesystem Driver<br>Finds 'hello.exe' on disk"]
        OS2["📦 Loader<br>Reads ELF/PE headers, maps code/data"]
        OS3["🧾 Memory Manager (MMU)<br>Allocates virtual address space"]
        OS4["🪪 Process Manager<br>Assigns PID, initializes stack & heap"]
        OS5["🕒 Scheduler<br>Picks which process gets CPU time"]
        OS6["🧩 Syscall Interface<br>Bridge between user mode & kernel"]
    end

    subgraph MEM["🧮 [3] Memory (RAM)"]
        M1["📜 Text Segment<br>Executable machine code"]
        M2["🔢 Data Segment<br>Initialized globals/statics"]
        M3["🫙 BSS Segment<br>Uninitialized globals (zeroed)"]
        M4["🌱 Heap<br>malloc/new allocations (grows upward)"]
        M5["🧮 Stack<br>function frames, locals (grows downward)"]
    end

    subgraph CPU["⚡ [4] CPU (Core)"]
        C1["📍 Registers (RIP, RSP, RBP, etc.)"]
        C2["🧮 ALU (Arithmetic Logic Unit)"]
        C3["🧭 Control Unit<br>Fetch → Decode → Execute cycle"]
        C4["🧠 Cache (L1/L2/L3)<br>Stores recently used data"]
        C5["🧩 Instruction Pipeline<br>Overlaps execution for speed"]
    end

    subgraph IO["🔌 [5] Devices / I/O"]
        IO1["💽 Disk Controller → save/load files"]
        IO2["🌐 Network Card → send/receive packets"]
        IO3["🎨 GPU → render output"]
        IO4["⌨️ Keyboard / Console → input/output text"]
    end

    %% =============================
    %% Connections Between Layers
    %% =============================

    D3 -->|DMA Transfer| OS1
    OS1 --> OS2
    OS2 --> M1
    OS3 --> MEM
    OS4 --> MEM
    OS5 --> CPU
    CPU -->|Fetch/Decode/Execute| MEM
    CPU -->|Syscalls| OS6
    OS6 --> IO
    IO1 --> D3
    IO2 --> OS6
    IO3 --> OS6
    IO4 --> OS6

    %% Highlight main execution flow
    D1 --> OS2 --> MEM --> CPU --> OS6 --> IO
```
