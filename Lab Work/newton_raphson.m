clc;
f=@(x) x.^2-5*x+6;
fplot(f,[-2,8])
df=@(x)2*x-5;
x=0;
for i=0:5
  y=x;
  x=y-f(x)./df(x);
  if(x==y)
  break
  end
end
fprintf('the root is %f',x);
fprintf('\nMd Faisal Ahmed\nID:152392326');
