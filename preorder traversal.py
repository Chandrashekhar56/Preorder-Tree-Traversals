class Create_Node:
    def __init__(self,value):
        self.left_child = None
        self.right_child = None
        self.data_part = value   
    def insert_value(self, value):
        if self.data_part:            
            if value < self.data_part:
                if self.left_child is None:
                    self.left_child = Create_Node(value)
                else:
                    self.left_child.insert_value(value)
            elif value > self.data_part:
                if self.right_child is None:
                    self.right_child = Create_Node(value)
                else:
                    self.right_child.insert_value(value)
        else:
            self.data_part = value
            
    def preorder(self, root_node):
        a =[]
        if root_node:
            print(root_node.data_part)
            a = self.preorder(root_node.left_child)
            a = a + self.preorder(root_node.right_child)
        return a

root_node = Create_Node(10)
root_node.insert_value(20)
root_node.insert_value(5)
root_node.insert_value(17)
root_node.insert_value(2)
root_node.insert_value(13)
root_node.insert_value(7)
root_node.preorder(root_node)
