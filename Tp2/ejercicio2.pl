talento(juan, cantar).
talento(pedro, cantar).
talento(maria, cantar).

talento(juan, pintar).
talento(patricia, pintar).

talento(lucas, bailar).

talento(pedro, escribir).
talento(luisa, escribir).
talento(ana, escribir).

talentoso(Y) :- talento(Y,Z), talento(Y,T), T \=:= Z.

semejantes(Y,X) :- talento(Y,Z), talento(X,Z).
