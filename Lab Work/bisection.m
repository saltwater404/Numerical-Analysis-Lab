
clc;
close all;
fprintf('Bisection Method\n');
f=@(x)x.^2-4*x-10;
%f=@(x)x.^4-x-10;
%f=@(x) x*log(10^x)-1.2;
fplot(f,[-2,2])
a=5;
b=6;
for i=0:100
  c=(a+b)/2;
  if(f(a)*f(c)>0)
  a=c;
else
  b=c;
end
end
fprintf("The root is %f",c);
fprintf('\nMd Faisal Ahmed \nID:152392326');
