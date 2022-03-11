from itertools import count


class Node(): 

    def __init__(self,value) -> None:
        self.value = value
        self.left = None    #istanza nodi 
        self.right = None
    
    def printNode(self):
        print(self.value)

    def insertNode(self,value):
        if self.value:
            if value < self.value:
                if self.left is None:
                    self.left = Node(value)
                else:
                    self.left.insertNode(value)
            elif value > self.value:
                if self.right is None: # se non ha un valore ne creo uno nuovo e assegno un valore
                    self.right = Node(value)
                else:                   
                    self.right.insertNode(value)    # se esiste già un valore vado al nodo figlio e inserisco il valore
        else : 
            self.value=value
        
    def calculateDepth(self,count):
        cL,cR = count ,count
        if self.left:
            cL+=self.left.calculateDepth(count)
        if self.right:
            cR+=self.right.calculateDepth(count)

        return max(cR,cL)+1

    def findValue(self,value):
        if self.value == value :
            return True
        elif value < self.value:
            if self.left:
                return self.left.findValue(value)
        elif value > self.value:
            if self.right:
                return self.right.findValue(value) 

    #Print orders

    def printTreePreOrder(self): 
        if self.value:
            print(self.value)
        if self.left : 
           self.left.printTreePreOrder()
        if self.right:
            self.right.printTreePreOrder()

    def printTreePostOrder(self): 
        if self.left : 
           self.left.printTreePostOrder()
        if self.right:
            self.right.printTreePostOrder()
        print(self.value)

    def printTreeInOrder(self): 
        if self.left : 
           self.left.printTreeInOrder()
        print(self.value)
        if self.right:
           self.right.printTreeInOrder()
        
        
    


def main():
    tree = Node(69)     #                  69
    tree.insertNode(23) #           23
    tree.insertNode(22) #       22      24
    tree.insertNode(24) #                   25
    tree.insertNode(25) 
    
    print(f"Depth : {tree.calculateDepth(0)-1}")
    if tree.findValue(69):
        print("Value found ")
    else:
        print("Valur not found ")

    print('PreOrder : \n')
    tree.printTreePreOrder()
    print('PostOrder : \n')
    tree.printTreePostOrder()
    print('InOrder : \n')
    tree.printTreeInOrder()
    


if __name__== "__main__" :
    main()