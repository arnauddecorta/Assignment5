CODE IS NOT READY FOR EXECUTION YET

Compilation : 

The file compile to slm executable, with a make instruction (not completely supported yet, awaiting the second class implementation)


Usage : 

the programm can be executed with 3 arguments : 
- An integer k that decides the word size
- The name of a text file, containing any kind of text, that is used for training the model.
- An integer that decides how many characters to output, including the starting k-gram. It must be at least k.
It can also be called with the option -a (before any argument), with an additional argument to give, the pseudocount. 

Result: 

For now, it only checks that the number of argument given is correct. 

