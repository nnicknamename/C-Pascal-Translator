var b,c : integer ;
var r : real ;
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
	end 
	else 
	begin 
		b := 1 + b; 
	end ; 
end ; 
Exit(a); 
END;
var l , a , j , i : integer ;
BEGIN
l := 2435; 
a := 0; 
i := 0; 
while(i < 10) do 
begin 
	a := a mod l; 
	a := 1 + a; 
	a := 1 + a; 
	j := 0; 
	while(j < 10) do 
	begin 
		a := a mod l; 
		a := 1 + a; 
		a := 1 + a; 
		j := j + 1; 
	end ; 
	i := i + 1; 
end ; 
i := 0; 
while(i < 10) do 
begin 
	a := a mod l; 
	a := 1 + a; 
	a := 1 + a; 
	j := 0; 
	while(j < 10) do 
	begin 
		a := a mod l; 
		a := 1 + a; 
		a := 1 + a; 
		j := j + 1; 
	end ; 
	i := i + 1; 
end ; 
END.
