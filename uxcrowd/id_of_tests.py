import requests
import random

url_token = 'https://prod.uxcrowd.ru/api/account'
url_auth = 'https://prod.uxcrowd.ru/api/authentication'
url_orders = 'https://prod.uxcrowd.ru/api/customer/orders'

id_n = input('Сколько id брать на 1 юзера?:')

file_name = input('Название файла с расширением с логинами клиентов вида clientXXXX + новая строка, после последнего логина обязательно новая строка!!!!!!!:')

with open('test_Id.dat', 'w') as file2:
    file2.write('test_Id' + '\n')

with open(file_name) as file:
    for client in file.readlines():
        with requests.Session() as session:
            r = session.get(url_token)
            token = r.cookies.get('XSRF-TOKEN')
            headers = {'X-XSRF-TOKEN': f'{token}'}
            body = {
                    'username': f'{client[:-1]}',
                    'password': '654321',
                    'remember-me': 'undefined',
                    'submit': 'Login'
                    }     
            r = session.post(url_auth, headers=headers, data=body)
            token = r.cookies.get('XSRF-TOKEN')
            r = session.get(url_orders, headers=headers)
            orders_list = r.json()
            random.shuffle(orders_list)
            with open('test_Id.dat', 'a') as file2:
                file2.write('test_Id' + '\n')
                for n in range(id_n):
                    file2.write(str(orders_list[n].get('id')) + '\n')
                    print(orders_list[n].get('id'))