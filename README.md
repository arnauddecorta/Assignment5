
Compilation : 

The file compile to slm executable, with a make instruction


Usage : 

the programm can be executed with 3 arguments : 
- An integer k that decides the word size
- The name of a text file, containing any kind of text, that is used for training the model.
- An integer that decides how many characters to output, including the starting k-gram. It must be at least k.
It can also be called with the option -a (before any argument), with an additional argument to give, the pseudocount. 

Exemple : 

./slm  6 a_modest_proposal.txt 10

./slm -a 0.01 3 a_modest_proposal.txt 60

Result: 

It gives out a word of lenght l, by starting from a word of lenght k, then generates the missing letters by selecting them one after the other by looking at wich is the most probable one. 


