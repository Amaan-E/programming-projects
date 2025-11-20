def valid_email(e: str):
    from re import match

    return bool(match(r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$", e))


def valid_email2(e: str):
    if "@" in e and "." in e:
        return True
    return False


if __name__ == "__main__":
    input = "abc@example.com"
    print(valid_email(input))
    print(valid_email2(input))
