#!/bin/csh
@ inicio = 100
@ fin = 30000
@ incremento = 500
set ejecutable = mejor
set salida = mejor.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i 10000` >> $salida
  @ i += $incremento
end

@ inicio = 100
@ fin = 30000
@ incremento = 500
set ejecutable = peor
set salida = peor.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i 10000` >> $salida
  @ i += $incremento
end
