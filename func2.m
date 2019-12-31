clc
function[p,q]=func(x,y)
p=x.*x+y.*y;
q=x+y;
end
[a,b]=func(2,3)