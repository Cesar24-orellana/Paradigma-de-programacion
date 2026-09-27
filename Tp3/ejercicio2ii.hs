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

filtrarLista1Guar l n
    | (null l)  = []
    | (head l == n) = tail l
    | otherwise = take 1 l ++ filtrarLista1Guar (tail l) (n)

-- ii. Realice una versión con Pattern Matching

filtrarLista1PM [] n = []
filtrarLista1PM (x:xs) n = if (x == n) then xs else [x] ++ filtrarLista1PM xs n

-- iii. Realice una versión con List Comprehension 

filtrarLista1LCompr [] n = []
filtrarLista1LCompr xs n = [x | x <- xs, x /= n]

-- d. invertirLista recibe una lista y devuelve la lista invertida.

invertirLista [] = []
invertirLista l = lista [] l
    where 
        | lista li [] = li                      -- Si la lista original esta vacia, devuelve el acumulador
        | lista li (x:xs) = lista (x:li) xs     -- Toma la cabeza de la lista y la pone en frente del acumulador

