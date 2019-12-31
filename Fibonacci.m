clc
n = 10;
fibo =[1,1];
for i = 3:n
  fibo(i) = fibo(i-1)+fibo(i-2);
end
disp('Fibonacci Series:');
disp(fibo);