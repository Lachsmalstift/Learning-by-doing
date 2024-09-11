def convert(text):
    text = text.replace(":)", "🙂")
    text = text.replace(":(", "🙁")
    return text

user_input = input("Gib etwas ein: ")
print(convert(user_input))