import requests

payload = {
    "currency":"NT$"
    "studio_id":"1090"
    "branch_id":"1275"
    "selected_services":"28055"
    "selected_services_namelist":"羽球館場地預約，現場付費"
    "selected_services_timetotal":"1 小時0 分鐘"
    "selected_services_pricetotal":"250"
    "service_url":"https://17fit.com/NCUsportscenter/01?tab=appointments"
    }

r = requests.get("https://17fit.com/service-flow-sp", params=payload)
with open('./searchContent.html', 'w+') as f:
  f.write(r.text)
  print('saved')


