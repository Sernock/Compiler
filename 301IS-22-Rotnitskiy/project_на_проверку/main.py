from person import Person
from real_estate import RealEstate
from deal import Deal
from file_operations import load_deals_from_file, save_deal_to_file
from contract_saver import save_contract_to_docx

def main():
    """Основная программа для управления сделками."""
    deals_list = load_deals_from_file('deals_output.txt')

    while True:

        if deals_list:
            next_deal_number = max(deal.deal_number for deal in deals_list) + 1
        else:
            next_deal_number = 1  # Если список пуст, начинаем с 1

        action = input(
                f"1.Введите 'new' для создания новой сделки\n"
                f"2.Введите 'view' для просмотра существующих сделок\n"
                f"3.Введите 'contract' для создания договора для сделки\n"
                f"4.Введите 'delete' для удаления сделки из файла\n"
                f"5.Введите 'exit' для выхода из программы:\n"
        ).strip()

        if action == 'new':
            # Ввод данных для новой сделки
            seller_name = input("Имя продавца: ").strip()
            if not seller_name:
                print("Ошибка: имя продавца не может быть пустым.")
                continue

            seller_surname = input("Фамилия продавца: ").strip()
            if not seller_surname:
                print("Ошибка: фамилия продавца не может быть пустой.")
                continue

            seller_patronymic = input("Отчество продавца (необязательно): ").strip()

            seller_phone = input("Телефон продавца (запрещены пробелы): ").strip()
            if ' ' in seller_phone:  # Проверка на наличие пробелов
                print("Ошибка: телефон не должен содержать пробелы.")
                continue
            if not seller_phone.isdigit():
                print("Ошибка: телефон должен содержать только цифры.")
                continue

            buyer_name = input("Имя покупателя: ").strip()
            if not buyer_name:
                print("Ошибка: имя покупателя не может быть пустым.")
                continue

            buyer_surname = input("Фамилия покупателя: ").strip()
            if not buyer_surname:
                print("Ошибка: фамилия покупателя не может быть пустой.")
                continue

            buyer_patronymic = input("Отчество покупателя (необязательно): ").strip()

            buyer_phone = input("Телефон покупателя (запрещены пробелы): ").strip()
            if ' ' in buyer_phone:  # Проверка на наличие пробелов
                print("Ошибка: телефон не должен содержать пробелы.")
                continue
            if not buyer_phone.isdigit():
                print("Ошибка: телефон должен содержать только цифры.")
                continue

            real_estate_address = input("Адрес недвижимости (запятые заменяются на точки): ").strip()
            if not real_estate_address:
                print("Ошибка: адрес недвижимости не может быть пустым.")
                continue
            real_estate_address = real_estate_address.replace(',', '.')

            try:
                real_estate_price = int(input("Цена (руб., только целое число): ").strip())
                if real_estate_price <= 0:
                    print("Ошибка: цена должна быть положительным числом.")
                    continue
            except ValueError:
                print("Ошибка: цена должна быть целым числом.")
                continue

            try:
                real_estate_square = float(input("Площадь (м², может быть дробным числом): ").strip())
                if real_estate_square <= 0:
                    print("Ошибка: площадь должна быть положительным числом.")
                    continue
            except ValueError:
                print("Ошибка: площадь должна быть числом.")
                continue

            try:
                real_estate_rooms = int(input("Количество комнат (только целое число): ").strip())
                if real_estate_rooms <= 0:
                    print("Ошибка: количество комнат должно быть положительным числом.")
                    continue
            except ValueError:
                print("Ошибка: количество комнат должно быть целым числом.")
                continue

            city = input("Город сделки: ").strip()
            if not city:
                print("Ошибка: город сделки не может быть пустым.")
                continue

            print("Сделка успешно зарегистрирована!\n")

            seller = Person(seller_name, seller_surname, seller_patronymic, seller_phone)
            buyer = Person(buyer_name, buyer_surname, buyer_patronymic, buyer_phone)
            real_estate_instance = RealEstate(real_estate_address, real_estate_price, real_estate_square, real_estate_rooms)

            deal = Deal(next_deal_number, seller, buyer, real_estate_instance, city)
            deals_list.append(deal)
            save_deal_to_file('deals_output.txt', deals_list)

        elif action == 'view':
            if not deals_list:
                print("\nСписок сделок пуст.")
            else:
                print("\nСписок сделок:")
                for deal in deals_list:
                    print(deal)
                    print()

        elif action == 'contract':
            try:
                deal_number_input = int(input("Введите номер сделки для генерации договора (только целое число): ").strip())
            except ValueError:
                print("Ошибка: номер сделки должен быть целым числом.")
                continue

            for deal in deals_list:
                if deal.deal_number == deal_number_input:
                    save_contract_to_docx(deal, f"contract_{deal_number_input}.docx")
                    break
            else:
                print("Сделка не найдена.")

        elif action == 'delete':
            try:
                deal_number_input = int(input("Введите номер сделки для удаления (только целое число): ").strip())
            except ValueError:
                print("Ошибка: номер сделки должен быть целым числом.")
                continue

            for i, deal in enumerate(deals_list):
                if deal.deal_number == deal_number_input:
                    del deals_list[i]  # Удаляем сделку
                    print(f"Сделка #{deal_number_input} удалена.")
                    # Корректируем номера оставшихся сделок
                    for j in range(i, len(deals_list)):
                        deals_list[j].deal_number -= 1  # Уменьшаем номера сделок
                    save_deal_to_file('deals_output.txt', deals_list)  # Сохраняем обновленный список сделок
                    break
            else:
                print("Сделка с таким номером не найдена.")

        elif action == 'exit':
            break

        print("\n")

if __name__ == '__main__':
    main()