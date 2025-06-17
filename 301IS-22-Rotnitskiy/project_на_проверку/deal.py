class Deal:
    """Класс, представляющий сделку с недвижимостью."""

    def __init__(self, deal_number, seller, buyer, real_estate_instance, city):
        """Инициализирует объект Deal."""

        self.deal_number = deal_number
        self.seller = seller
        self.buyer = buyer
        self.real_estate_instance = real_estate_instance
        self.city = city

    def __str__(self):
        """Возвращает строковое представление сделки."""
        return (f"Сделка #{self.deal_number}\n"
                f"Город: {self.city}\n"
                f"Продавец: {self.seller}\n"
                f"Покупатель: {self.buyer}\n"
                f"Недвижимость: {self.real_estate_instance}")

    def generate_contract(self):
        """Генерирует текст договора и возвращает"""

        return f"""
г. {self.city}
«_____» _______________ 2024 года

Продавец: {self.seller.surname} {self.seller.name} {self.seller.patronymic}, Телефон: {self.seller.phone}
Покупатель: {self.buyer.surname} {self.buyer.name} {self.buyer.patronymic}, Телефон: {self.buyer.phone}

1. Предмет Договора.
1.1. Продавец продает, а Покупатель покупает квартиру, расположенную по адресу: {self.real_estate_instance.address}.
Квартира состоит из {self.real_estate_instance.rooms} комнат, общей площадью {self.real_estate_instance.square} м².
Цена квартиры составляет {self.real_estate_instance.price} рублей.

АДРЕСА СТОРОН

Продавец:
{self.seller.surname} {self.seller.name} {self.seller.patronymic}

Покупатель:
{self.buyer.surname} {self.buyer.name} {self.buyer.patronymic}

ПОДПИСИ СТОРОН

Продавец:
________________/_______________
(подпись)                                          (ФИО)

Покупатель:
________________/_______________
(подпись)                                          (ФИО)
"""