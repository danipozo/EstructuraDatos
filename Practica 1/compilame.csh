#!/bin/csh
@ inicio = 1000
@ fin = 50000
@ incremento = 500
set ejecutable = mergesort
set salida = mergemimergeee.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i` >> $salida
  @ i += $incremento
end
