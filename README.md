Simulation of operation system based on Windows. Consists of 9 modules, each of them was created by another person:
1. Processor - CPU scheduling with priorities.
2. Synchronization - semaphores.
3. RAM - buddy system.<br>
**4. Virtual Memory - demand segmentation.**
5. Processes - based on Windows OS.
6. Interprocess communication.
7. Managing files and catalogues - indexing method.
8. Interpreter + programs in Assembler.
9. GUI - based on Windows.

My task was to create Virtual Memory part (4.). Whenever new process is created it loads its code to VM. When process gets highest priority its code is loaded to RAM where all operations happens. After that when it's done, updated code is loaded back to VM. 
<br>
Module is fully secured to not allow user make any mistakes i.e. overloading VM.
