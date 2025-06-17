class RealEstate:
    """Класс, представляющий недвижимость."""

    def __init__(self, address, price, square, rooms):
        """Инициализирует объект RealEstate."""

        self.address = address
        self.price = price
        self.square = square
        self.rooms = rooms

    def __str__(self):
        """Возвращает строковое представление RealEstate."""
        return f"{self.rooms} комнат(ы), {self.square} м², Адрес: {self.address}, Цена: {self.price} рублей"
