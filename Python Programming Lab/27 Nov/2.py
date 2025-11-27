def group(words: list):
    grouped = {}
    for word in words:
        sorted_word = "".join(sorted(word))
        if sorted_word in grouped:
            grouped[sorted_word].add(word)
        else:
            new = set()
            new.add(word)
            grouped[sorted_word] = new
    return grouped


if __name__ == "__main__":
    words = ["tea", "tan", "eat", "nat"]
    a = group(words)
    
    print(a)