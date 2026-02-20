# Predavanja 1 (20. 1. 2026)

## Prevajanje
Prevzamemo, da je *prg.c* nas program.

Potem se tako prevaja:

```sh
    $ gcc prg.c         # prevajanje v object in exec file
    $ gcc -o prg prg.c  # prevajanje direktno v samo exec file
```
    
Ce hocemo postopoma prevajati:

```sh
    $ gcc -c prg.c      # prg.c -> prg.o / prevajanje
    $ gcc -o prg prg.o  # prg.o -> ./prg / povezovanje
```


## Program, ki preberi stevilko
Glej prg1.c.

## Optimizacije
Ce hocemo imeti optimizacije, dodamo -Ox flag, kjer je *x* nivo optimizacije, npr.:

```sh
    $ gcc -o prg prg.c -O2  # optimizacija nivoja 2 
                            # (dosti stvari naredi, ni pa tako agresivno kot -O3)
```

## Nevarnosti C-ja
C ne najde vseh napak oz. jih tudi ne poskusa, npr. inicializacija spremenljiv se ne nastavi na 0 (`int i;`, i ni vedno enak 0).
Ponavadi ni prevajalnik kriv, ponavadi si ti.
