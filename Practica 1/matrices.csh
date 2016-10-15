#!/bin/csh
@ inicio = 10
@ fin = 500
@ incremento = 10
set ejecutable = matrices
set salida = matrices.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i 10000` >> $salida
  @ i += $incremento
end
