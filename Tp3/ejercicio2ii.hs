--  a. contar recibe una lista y cuenta la cantidad de elementos que contiene.

contar [] = 0
contar (x:xs) = 1 + contar xs

--  b. sumaDeElementos recibe una lista numérica y calcula la suma de sus elementos.
-- i. Realice una versión con Guards

-- sumaDeElementosi :: [a] -> Int
sumaDeElementosi l
    | null l = 0
    | otherwise = (head l) + sumaDeElementosi (tail l)

-- ii. Realice una versión con Pattern Matching 

-- sumaDeElementosii :: [a] -> Int
sumaDeElementosii [] = 0
sumaDeElementosii (x:xs) = x + (sumaDeElementosii xs)


-- c. filtrarLista1 recibe una lista y un elemento y elimina de la lista todas las ocurrencias de ese elemento.
-- i. Realice una versión con Guards

--filtrarLista1Guar L N
 --   | (null L)  = []
--    | (head L == n) = tail L
--    | otherwise = take 1 L ++ filtrarLista1Guar (tail L) (N)

-- ii. Realice una versión con Pattern Matching

--filtrarListaPM [] n = []
--filtrarListaPM [X|Xs] n 

-- iii. Realice una versión con List Comprehension 

