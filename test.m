clc
a = 2;
b = 5;
c= 6;
d = b .*b- 4.*a.*c;

if d>0
   disp('Roots are positive : ');
   x = (-b+d)./(2.*a);
   y = (-b-d)./(2.*a);
   disp(x);
   disp(y);
 elseif d==0
   disp('Roots are equal');
   x = y = -b./(2.*a);
   disp(x);
   disp(y);
 else
   disp('Roots are negative');
   end
