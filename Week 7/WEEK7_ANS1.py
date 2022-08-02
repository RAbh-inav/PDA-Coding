class newnode:
    def __init__(self,data):
        self.data=data 
        self.left=None
        self.right=None

def printr(Root):
    if Root:
        print(Root.data)
        printr(Root.left)
        printr(Root.right)
Root= newnode(5)
Root.left=newnode(4)
Root.right=newnode(1)
Root.left.left=newnode(2)
Root.left.right=newnode(3)
Root.right.left=newnode(6)
Root.right.right=newnode(7)
printr(Root)
