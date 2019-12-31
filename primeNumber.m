clc
N = input('Enter a positive integer: ');
primes=[ ];
for i=2:1:N
  if isprime(i)
    primes= [primes i];
  end
end
disp(primes)
