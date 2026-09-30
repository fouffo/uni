# What are the differences between compiled and interpreted languages?
One of the biggest differences there can be between programming languages is whether one is compiled or interpreted.  
The names themselves already fully describe how they work: compiled languages are turned into machine code* by a compiler, whereas interpreted languages are interpreted at runtime. To truly understand what this actually meanss though you can refer to the table below:
|Compiled|Interpreted|Reason|
|:---:|:---:|:---:|
|faster|slower|Interpretation adds significant overhead when running a program|
|errors are easier to catch|errors are harder to catch|The compiler already tries it's best to stop you from writing code that may have unexpected behavior. This significantly reduces the number of bugs you will encounter.|
|programs work only on the architecture they were compiled for*|programs work on multiple platforms|Compiled code only has the specific instructions for the processor type it was designed to run on. A program compiled to run on your computer's CPU will not run on your phone because it doesn't understand the instructions. Interpreted programming languages however need a runtime environment (for example your browser when it runs javascript code) either way, so once that is installed on a device you can run your code on it.|
