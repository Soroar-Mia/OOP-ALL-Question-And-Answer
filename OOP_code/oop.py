# Class and Object

class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species

    def speak(self):
        raise NotImplementedError("Subclasses must implement this method")

# Creating an object of the Animal class
dog = Animal("Buddy", "Dog")
print(dog.name)  # Output: Buddy
print(dog.species) 


# Methods

class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species

    def speak(self):
        print(f"{self.name} makes a sound")

# Using the method
dog = Animal("Buddy", "Dog")
dog.speak() 


# Inheritance

class Dog(Animal):
    def speak(self):
        print(f"{self.name} barks")

# Creating an object of the Dog class
dog = Dog("Buddy", "Dog")
dog.speak() 


# Encapsulation


class Animal:
    def __init__(self, name, species):
        self.__name = name  # Private attribute
        self.species = species

    def get_name(self):
        return self.__name

    def set_name(self, name):
        self.__name = name

# Accessing private attribute via public methods
dog = Animal("Buddy", "Dog")
print(dog.get_name())  # Output: Buddy
dog.set_name("Max")
print(dog.get_name()) 


# Polymorphism

class Cat(Animal):
    def speak(self):
        print(f"{self.name} meows")

# Demonstrating polymorphism
animals = [Dog("Buddy", "Dog"), Cat("Whiskers", "Cat")]

for animal in animals:
    animal.speak()
# Output:
# Buddy barks
# Whiskers meows


#  Abstraction

from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self, name, species):
        self.name = name
        self.species = species

    @abstractmethod
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        print(f"{self.name} barks")

class Cat(Animal):
    def speak(self):
        print(f"{self.name} meows")

# Creating objects of the derived classes
dog = Dog("Buddy", "Dog")
cat = Cat("Whiskers", "Cat")

dog.speak()  # Output: Buddy barks
cat.speak()  

# 