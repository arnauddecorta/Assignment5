
Compilation : 

The file compile to slm executable, with a make instruction


Usage : 

the programm can be executed with 3 arguments : 
- An integer k that decides the word size
- The name of a text file, containing any kind of text, that is used for training the model.
- An integer that decides how many characters to output, including the starting k-gram. It must be at least k.
It can also be called with the option -a (before any argument), with an additional argument to give, the pseudocount. 

Result: 

It gives out the most probable word of lenght k. 

Waiting for the implementation of the generation of the letters that come after. 

