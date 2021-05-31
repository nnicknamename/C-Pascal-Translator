function minus ( x:real;y:real ) : real;
var a : real ;
BEGIN
a := 5; 
while ( 10 > 5 ) do  
begin 
	a := a + x + y; 
	if ( a > 10 ) then  
	begin 
		a := a + x + y; 
		repeat 
		begin 
			a := 1 + a; 
			a := a + x + y; 
			y := 1 + y; 
		end 
		until ( a < 100 ); 
	end ; 
end ; 
Exit(a); 
END;
var l : integer ;
BEGIN
l := 0; 
END.
