#!/bin/csh
@ inicio = 1000000
@ fin = 10000000
@ incremento = 100000
set ejecutable = binaria
set salida = tiempos_binaria.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i` >> $salida
  @ i += $incremento
end
