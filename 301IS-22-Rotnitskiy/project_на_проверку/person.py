class Person:
    """Класс, представляющий человека (покупателя или продавца)."""

    def __init__(self, name, surname, patronymic, phone):
        """Инициализирует объект Person."""

        self.name = name
        self.surname = surname
        self.patronymic = patronymic
        self.phone = phone

    def __str__(self):
        """Возвращает строковое представление объекта Person."""
        return f"{self.surname} {self.name} {self.patronymic}, Телефон: {self.phone}"