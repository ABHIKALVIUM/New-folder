class Contact:
    def __init__(self, name, phone_number):
        self.name = name
        self.phone_number = phone_number

    def get_contact_details(self):
        return f"Name: {self.name}, Phone Number: {self.phone_number}"

class PhoneBook:
    def __init__(self):
        self.contacts = []

    def add_contact(self, contact):
        self.contacts.append(contact)
        return f"Contact '{contact.name}' added to the phone book."

    def display_contacts(self):
        return [contact.get_contact_details() for contact in self.contacts]

phone_book = PhoneBook()

while True:
    print("\n1. Add Contact\n2. Display Contacts\n3. Exit")
    choice = int(input("Choose an option: "))

    if choice == 1:
        name = input("Enter contact name: ")
        phone_number = input("Enter phone number: ")
        contact = Contact(name, phone_number)
        print(phone_book.add_contact(contact))

    elif choice == 2:
        print("Contacts in the phone book:")
        for details in phone_book.display_contacts():
            print(details)

    elif choice == 3:
        print("Exiting...")
        break

    else:
        print("Invalid option. Please choose again.")