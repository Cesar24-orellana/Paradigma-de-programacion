progenitor(ahadi,mufasa).
progenitor(ahadi,scar).
progenitor(uru,mufasa).
progenitor(uru,scar).

progenitor(mufasa,simba).
progenitor(sarabi,simba).

progenitor(simba,kopa).
progenitor(nala,kopa).
progenitor(simba,kiara).
progenitor(nala,kiara).

progenitor(scar, kovu).
progenitor(zira, kovu).
progenitor(scar, nuka).
progenitor(zira, nuka).
progenitor(scar, vitani).
progenitor(zira, vitani).

femenino(uru).
femenino(sarabi).
femenino(nala).
femenino(kiara).
femenino(zira).
femenino(vitani).

masculino(ahadi).
masculino(mufasa).
masculino(simba).
masculino(kopa).
masculino(scar).
masculino(kovu).
masculino(nuka).

padreDe(Y,X) :- progenitor(Y,X), masculino(Y).
madreDe(Y,X) :- progenitor(Y,X), femenino(Y).

hijo(Y,X) :- progenitor(Y,X), masculino(X).
hija(Y,X) :- progenitor(Y,X), femenino(X).

abuelo(X,Y):- progenitor(Z,X), progenitor(Y,Z), masculino(Y).
abuela(X,Y):- progenitor(Z,X), progenitor(Y,Z), femenino(Y).

hermanos(Y,X) :- padreDe(Z,Y), progenitor(Z,X), X \= Y.

primo(Y,X) :- padreDe(Z,Y), hermanos(Z,T), hijo(T,X).
prima(Y,X) :- padreDe(Z,Y), hermanos(Z,T), hija(T,X).

tio(Y,X) :- padreDe(Z,Y), hermanos(Z,X), masculino(X).

bisabueloDe(Y,X) :- abuelo(Y,Z), padreDe(X,Z).