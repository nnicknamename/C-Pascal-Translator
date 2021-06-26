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


var n , k : integer ;
BEGIN

read( n); 
k := fact( n); 
write('fact ', n ,' = ', k,#10); 

END.fp
