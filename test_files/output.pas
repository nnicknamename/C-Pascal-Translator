program output ;

var a , j , i : integer ;
c : array [0..9,0..9] of integer ;
BEGIN

i := 0; 
while(i < 10) do 
begin 
	j := 0; 
	while(j < 10) do 
	begin 
		c[i ,j] := i * j; 
		j := 1 + j; 
	end ; 
	i := 1 + i; 
end ; 
i := 0; 
while(i < 10) do 
begin 
	j := 0; 
	while(j < 10) do 
	begin 
		write( 'tesst ' ,c[i ,j] ,' qsqdf , f;(s ' ,i ,#10 ,' d)' ); 
		j := 1 + j; 
	end ; 
	i := 1 + i; 
end ; 

END.
