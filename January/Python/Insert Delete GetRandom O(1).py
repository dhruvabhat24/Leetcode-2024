class RandomizedSet:

    def __init__(self):
        self.random_dict = {}

    def insert(self, val: int) -> bool:
        if val not in self.random_dict:
            self.random_dict[val] = True
            return True
        else:
            return False

    def remove(self, val: int) -> bool:
        if val in self.random_dict:
            del self.random_dict[val]
            return True
        else:
            return False

    def getRandom(self) -> int:
        return list(self.random_dict.keys())[random.randint(0,len(self.random_dict)-1)]


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
