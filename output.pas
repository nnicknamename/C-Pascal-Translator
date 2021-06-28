program output.pas ;
var test , test1 , test11 : integer ;
function fact ( n:integer ) : integer;
var res , i : integer ;
BEGIN
res := 1; 
i := 1; 
while(i <= n) do 
begin 
	res := res * i; 
	i := 1 + i; 
end ; 
Exit(res); 
END;

function fact1 ( n:integer ) : integer;
var res , i : integer ;
BEGIN
res := 1; 
i := 1; 
while(i <= n) do 
begin 
	res := res * i; 
	i := 1 + i; 
end ; 
Exit(res); 
END;


var a , a1 , i : integer ;
b , b1 : real ;
c : double ;
d : char ;
e : longint ;
f : int64 ;
x : array [0..99] of integer ;
test2 : ^integer ;
BEGIN
test := 0; 
test1 := 50; 
test11 := 50; 
if ( a > 0 ) then  
begin 
	a := 1 + a; 
end ; 
if ( a < 100 ) then  
begin 
	b := 1 + b; 
	c := c + b; 
end 
else 
begin 
	a := 1 + a; 
	b := b + a; 
end ; 
if ( a > 0 ) then  
begin 
	b := 1 + b; 
	c := c - b; 
end 
else 
begin 
	a := 1 - a; 
	b := b + a; 
end ; 
i := 0; 
while(i < 100) do 
begin 
	if ( i > 50 ) then  
	begin 
		x[i] := i * a; 
	end 
	else 
	begin 
		x[i] := i mod a; 
	end ; 
	i := 1 + i; 
end ; 
while ( a1 < 50 ) do  
begin 
	a1 := fact1( a); 
end ; 
repeat 
begin 
	a := 1 + a; 
	b := b + a; 
end 
until ( b > 0 ); 
getmem(test2 , sizeof(integer)); 
test2^ := 100; 
END.
