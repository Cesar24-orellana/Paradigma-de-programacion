contarDigitos(N,C) :- N < 10, C is 1.
contarDigitos(N,C) :- N >= 10, X is N // 10, contarDigitos(X,S), C is S + 1.

ProductoDigitos(N, P) :- N < 10, P is N.
ProductoDigitos(N,P) :- N >= 10, X is N // 10, Y is N mod 10, ProductoDigitos(X, S), S is Y * S.

tieneCero(N) :- N < 10, N \=  0, !.
tieneCero(N) :- N < 10, N = 0, !.
tieneCero(N) :- N >= 10, D is N mod 10, D = 0, !.
tieneCero(N) :- N >= 10, D is N mod 10,  D \= 0, tieneCero(N // 10).

menorDigito(N,M,X) :- N < 10, N < M, X is N,!.
menorDigito(N,M,X) :- N < 10, N > M, X is M, !.
%                                                        menorDigito(N,M,X) :- N >= 10, Y is N mod 10, Y < M, X is Y, !. 
menorDigito(N,M,X) :- N >= 10, Y is N mod 10, Y < M, menorDigito(N // 10, Y,X).
menorDigito(N,M,X) :- N >= 10, Y is N mod 10, Y >= M, menorDigito(N // 10, M,X).


primerosNumeros(0,[]) :- !.
primerosNumeros(N,L) :- X is N - 1, primerosNumeros(X,R), append(R,[N], L).


% - - - -   PUNTO b   - - - - - -

CantElement([],0).
CantElement([_|X],C) :- CantElement(X,C1), C is C1 + 1.

SumaElement([],0).
SumaElement([Y|X],N) :- SumaElement(X,N1), N is Y + N1.

eliminar(_, [], []).
eliminar(X, [X|Y], R) :- eliminar(X,Y,R), !.
eliminar(X,[C|Y], [C|R]) :- eliminar(X,Y,R).