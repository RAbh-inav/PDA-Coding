class newnode:
    def __init__(self,data):
        self.data=data 
        self.left=None
        self.right=None

def deleteDeepest(node,deep_key_node):
    q = []
    q.append(node)
    while(len(q)):
        temp = q.pop(0)
        if temp is deep_key_node:
            temp = None
            return
        if temp.right:
            if temp.right is deep_key_node:
                temp.right = None
                return
            else:
                q.append(temp.right)
        if temp.left:
            if temp.left is deep_key_node:
                temp.left = None
                return
            else:
                q.append(temp.left)

def delete_value(node,key):
    if(node==None):
        return node
    if (node.left==None and node.right==None):
        if (node.data==key):
            return None
        else:
            return node
    key_node = None
    q = []
    q.append(node)
    temp = None
    while(len(q)):
        temp = q.pop(0)
        if temp.data == key:
            key_node = temp
        if temp.left:
            q.append(temp.left)
        if temp.right:
            q.append(temp.right)
    if key_node : 
        x = temp.data
        deleteDeepest(node,temp)
        key_node.data = x
    return node        

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
print("Original tree")
printr(Root)
del_value=4
delete_value(Root,del_value)
print("New tree after deletion")
printr(Root)