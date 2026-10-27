clc, clearvars, close all

x = linspace(0, 5);
y = (-(x - 3).^2) + 10;
max(y);
plot(x, y, '*')
hold on
plot(x, y.*(-1), '*')