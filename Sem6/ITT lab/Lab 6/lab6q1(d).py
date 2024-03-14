body=open("body.txt","r+")
name=open("name.txt","r+")
b=body.read()
for n in name:
    print(n)
    mail= "Wassup "+n.strip()+"\n"+b
    w=open(n.strip()+".txt","w")
    w.write(mail)

