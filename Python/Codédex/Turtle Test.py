#import turtle 

import turtle 
bat = turtle.Turtle()
bat.turtlesize(1,1,1)
bat.pensize(3)
wn = turtle.Screen()
wn.bgcolor("black")
wn.title("BATMAN")

#trutle color
bat.color("white","red")
bat.begin_fill()

#first half
bat.left(90)
bat.circle(50,85)
bat.circle(15,110)
bat.right(180)


bat.circle(30,150)
bat.right(5)
bat.fd(10)

bat.right(90)
bat.circle(-70,140)
bat.fd(40)
bat.rt(110)

bat.circle(100,30)
bat.circle(30,100)
bat.left(50)
bat.fd(50)
bat.right(145)

bat.fd(30)
bat.lt(55)
bat.fd(10)


#second half

bat.fd(10)
bat.left(55)
bat.fd(30)

bat.right (145)
bat.fd(50)
bat.left(50)
bat.circle(30,100)
bat.circle(100,30)

bat.right(90)
bat.right(20)
bat.fd(40)
bat.circle(-70,140)

bat.right(90)
bat.forward(10)
bat.right(5)
bat.circle(30,150)


bat.left(180)
bat.circle(15,110)
bat.circle(50,85)
#end and run 
bat.end_fill()

turtle.done()