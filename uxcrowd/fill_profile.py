import requests
from mimesis import Generic


# path = input('Название файла *.txt: ')

def gen_data():
    generic = Generic('ru')
    fullname = generic.person.full_name().split()
    firstname = fullname[0]
    lastname = fullname[1]
    return {'firstname':firstname, 'lastname':lastname}

url_token = 'https://prod.uxcrowd.ru/api/account'
url_auth = 'https://prod.uxcrowd.ru/api/authentication'
url_profile = 'https://prod.uxcrowd.ru/api/v2/tester/profile'

birthday = '01.01.1979'

for n in range(1140, 1141):
    with requests.Session() as session:
        r = session.get(url_token)

        token = r.cookies.get('XSRF-TOKEN')

        headers = {'X-XSRF-TOKEN': f'{token}'}
        body = {
                'username': f'test{n}',
                'password': '654321',
                'remember-me': 'undefined',
                'submit': 'Login'
                }     
        r = session.post(url_auth, headers=headers, data=body)

        token = r.cookies.get('XSRF-TOKEN')

        r = session.get(url_token)

        user_id = r.json().get('id')
        username = r.json().get('username')
        firstname = gen_data().get('firstname')
        lastname = gen_data().get('lastname')
        
        r = session.get(url_profile)

        headers = {
            'content-type': 'application/json;charset=UTF-8',
            'X-XSRF-TOKEN': f'{token}'
        }

        body = {"id":f'{user_id}',"fio":f"{firstname} {lastname}","username":f"{username}","country":None,"paypalEmail":None,"zipcode":None,"city":"Залупинск","income":"0","familyStatus":"NOT_MARRIED","kids":"NONE","emailNotification":True,"gender":"MALE","birthday":f"{birthday}","education":"HIGH","socialStatus":"UNEMPLOYED"}

        r = session.post(url_profile, headers=headers, json=body)
        print('test'+str(n), r.status_code)