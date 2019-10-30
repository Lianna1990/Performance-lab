import requests

path = input('Название файла *.txt: ')


url = 'https://prod.uxcrowd.ru/activate?key='
url_token = 'https://prod.uxcrowd.ru/api/account'
url_act_exist = 'https://prod.uxcrowd.ru/api/activate_exist?key='
url_act = 'https://prod.uxcrowd.ru/api/activate'

with open(path) as file:
    for line in file.readlines():
        with requests.Session() as session:
            url_1 = url + str(line[:-1])
            r = session.get(url_1)
            print(str(line[:-1]), r.status_code)
            r = session.get(url_token)
            token = r.cookies.get('XSRF-TOKEN')
            headers = {'X-XSRF-TOKEN': f'{token}'}
            url_act_exist_1 = url_act_exist + str(line[:-1])
            r = session.get(url_act_exist_1, headers=headers)
            body = {
                        "key":f"{str(line[:-1])}",
                        "password":"654321"
                        }
            r = session.post(url_act, headers=headers, json=body)
            print(r.json())