--  a. contar recibe una lista y cuenta la cantidad de elementos que contiene.

contar [] = 0
contar [N|X] = 1 contar (X)

--  b. sumaDeElementos recibe una lista numérica y calcula la suma de sus elementos.
-- i. Realice una versión con Guards
-- ii. Realice una versión con Pattern Matching 

sumaDeElementosi L
    | L = [] = 0
    | otherwise = (head L) + sumaDeElementosi (tail L)

sumaDeElementosii :: [a] -> Int
sumaDeElementosii [] = 0
sumaDeElementosii [N|X] = N + sumaDeElementosi (X)


-- c. filtrarLista1 recibe una lista y un elemento y elimina de la lista todas las ocurrencias de ese elemento.
-- i. Realice una versión con Guards

filtrarLista1Guar L N
    | (null L)  = []
    | (head L == n) = tail L
    | otherwise = take 1 L ++ filtrarLista1Guar (tail L) (N)

-- ii. Realice una versión con Pattern Matching
-- iii. Realice una versión con List Comprehension -}
