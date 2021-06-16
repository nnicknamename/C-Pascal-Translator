function fact ( n:integer ) : longint;
var res : longint ;
i : integer ;
b : array [0..1000] of integer ;
BEGIN
res := 1; 
i := 1 + 20; 
while(i < n) do 
begin 
	res := res * i; 
	i := 1 + i; 
end ; 
Exit(res); 
END;
var d : array [0..10] of real ;
b : array [0..1000] of integer ;
BEGIN
b := 10; 
c := 0; 
while ( a > 10 ) do  
begin 
	i := 1 + 20; 
	while(i < n) do 
	begin 
		b := res; 
		res := res * i; 
		repeat 
		begin 
			b := res; 
			res := res * i; 
		end 
		until ( b + 50-5 < 100 ); 
		i := 1 + i; 
	end ; 
end ; 
write(fact(10)); 
END.
