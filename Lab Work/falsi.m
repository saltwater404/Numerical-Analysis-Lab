clc
close all;
fprintf('Falsi Method \n');
f=@(x)x.^2-4*x-10;
%f=&(x)x.^4-x-10;
%f=@(x)3*x-cos(x)-1;
fplot(f,[-2,2])
a=5;
b=6;
for i=0:20
  c=(a*f(b)-b*f(a))/(f(b)-f(a));
  if(f(a)*f(c)>0)
  a=c;
else
  b=c;
  end
end
fprintf("The root is %f",c);
fprintf('\nMd Faisal Ahmed\n ID:152392326');
