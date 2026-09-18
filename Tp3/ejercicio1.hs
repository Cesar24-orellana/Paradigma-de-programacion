{-  misterio1 recibe un numero n y devuelve n*n -}
misterio1 x 
    | x <= 0 = 0
    | x == 1 = 1
    | otherwise = 2*x + misterio1 (x - 1) - 1

{-  misterio2 recibe un numero n suma los digitos del numero -}

misterio2 0 = 0
misterio2 n = (mod n 10) + misterio2 (div n 10)

contarDigitos 0 = 0
contarDigitos x = 1 + contarDigitos(div x 10)

productoDigitos 0 = 1
productoDigitos x = (mod x 10) * productoDigitos(div x 10)

tieneCeros n
    | n < 10 = n == 0
    | mod 10 n == 0  = True
    | otherwise = tieneCeros (div n 10)

encontrarMenor n
    | n < 10 = n
    | otherwise = min (mod n 10) (encontrarMenor (div n 10))