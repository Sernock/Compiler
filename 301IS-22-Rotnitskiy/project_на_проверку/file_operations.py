from person import Person
from real_estate import RealEstate
from deal import Deal


def save_deal_to_file(filename, deals):
    """Сохраняет список сделок в текстовый файл."""
    with open(filename, 'w', encoding='utf-8') as file:
        for deal in deals:
            file.write(f"{deal.deal_number};{deal.seller.name},{deal.seller.surname},{deal.seller.patronymic},{deal.seller.phone};"
                       f"{deal.buyer.name},{deal.buyer.surname},{deal.buyer.patronymic},{deal.buyer.phone};"
                       f"{deal.real_estate_instance.address},{deal.real_estate_instance.price},"
                       f"{deal.real_estate_instance.square},{deal.real_estate_instance.rooms};"
                       f"{deal.city}\n")


def load_deals_from_file(filename):
    """Загружает сделки из текстового файла."""
    deals = []
    with open(filename, 'r', encoding='utf-8') as file:
        for line in file:
            parts = line.strip().split(';')

            deal_number = int(parts[0])
            seller_info = parts[1].split(',')
            buyer_info = parts[2].split(',')
            real_estate_info = parts[3].split(',')
            city = parts[4]

            seller = Person(seller_info[0], seller_info[1], seller_info[2], seller_info[3])
            buyer = Person(buyer_info[0], buyer_info[1], buyer_info[2], buyer_info[3])
            real_estate_instance = RealEstate(real_estate_info[0], int(real_estate_info[1]),
                                              float(real_estate_info[2]), int(real_estate_info[3]))
            deals.append(Deal(deal_number, seller, buyer, real_estate_instance, city))

    return deals