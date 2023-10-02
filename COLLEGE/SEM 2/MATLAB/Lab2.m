t=0:0.1:30;

y1=sin(t);
y2=y1+(1/3)*sin(3*t);
y3=y2+(1/5)*sin(5*t);
y4=y3+(1/7)*sin(7*t);
y5=y4+(1/9)*sin(9*t);
y6=y5+(1/11)*sin(11*t);
y7=y6+(1/13)*sin(13*t);
y8=y7+(1/15)*sin(15*t);
y9=y8+(1/17)*sin(17*t);
y10=y9+(1/19)*sin(19*t);
y11=y10+(1/21)*sin(21*t);
y12=y11+(1/23)*sin(23*t);


subplot(8,2,1);
plot(t,y1,'r');
grid on;
subplot(6,2,2);
plot(t,y2,'b');

subplot(6,2,3);
plot(t,y3,'g');

subplot(6,2,4);
plot(t,y4,'y');

subplot(6,2,5);
plot(t,y5,'m');

subplot(6,2,6);
plot(t,y6,'r');

subplot(6,2,7);
plot(t,y7,'b');

subplot(6,2,8);
plot(t,y8,'c');

subplot(6,2,9);
plot(t,y9,'g');

subplot(6,2,10);
plot(t,y10,'r');

subplot(6,2,11);
plot(t,y11,'b');

subplot(6,2,12);
plot(t,y12,'g');
