from turtle import*

k = 40
speed(5)
for i in range (10):
    forward(5 * k)
    right(90)
up()

for x in range (-10*k, 10*k,k):
    for y in range (-10*k, 10*k,k):
        goto(x,y)
        dot(3, 'red')
done()

print("=")