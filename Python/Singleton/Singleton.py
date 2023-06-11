class Singleton:

    # class variable
    __instance = None
    
    @staticmethod
    def getInstance():
        print("Get Instance")
        if Singleton.__instance == None:
            Singleton()
        return Singleton.__instance
    
    def __init__(self):
        # singleton class should have a single instance
        if Singleton.__instance != None:
            raise Exception ("Singleton exists already")
        else:
            Singleton.__instance = self


s1 = Singleton.getInstance()
print(s1)
s2 = Singleton.getInstance()
print(s2)