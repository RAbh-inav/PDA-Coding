class newnode:
    def __init__(self,data):
        self.data= data 
        self.left= None
        self.right= None

def printr(Root):
    if Root:
        print(Root.data)
        printr(Root.left)
        printr(Root.right)


def value_available_or_not(node,key):
    if(node==None):
        return False
    if(node.data==key):
        return True
    lsearch= value_available_or_not(node.left,key)
    if lsearch:
        return lsearch
    rsearch= value_available_or_not(node.right,key)
    return rsearch

Root= newnode(5)
Root.left=newnode(4)
Root.right=newnode(1)
Root.left.left=newnode(2)
Root.left.right=newnode(3)
Root.right.left=newnode(6)
Root.right.right=newnode(7)
printr(Root)
key=5
print("Value to be searched is 5")
final= value_available_or_not(Root,key)
if final:
    print("Found")
else:
    print("Not Found")