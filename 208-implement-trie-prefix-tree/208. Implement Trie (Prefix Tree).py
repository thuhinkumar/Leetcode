class Trie:

    def __init__(self):
        self.seen = set()
        self.prefix = set()

    def insert(self, word: str) -> None:
        self.seen.add(word)

        curr = ""
        for c in word:
            curr+=c
            self.prefix.add(curr)

    def search(self, word: str) -> bool:
        return word in self.seen

    def startsWith(self, prefix: str) -> bool:
        return prefix in self.prefix
        


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)