var a , j , i : integer ;
c : array [0..10,0..10] of integer ;
k : real ;
s : ^real ;
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
		write(' test ',', tt', j); 
		j := 1 + j; 
	end ; 
	k := 0; 
	i := 1 + i; 
end ; 
END.
