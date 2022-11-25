import selenium
import os
import sys
import time
import datetime
from datetime import date
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import Select
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.options import Options
from  selenium.webdriver.common.by  import  By

def login(acc, pswd):
    box_phone = driver.find_element(By.XPATH,'/html/body/div[2]/div[2]/div/form/div[2]/div[2]/ul/li[2]/input')
    box_pswd = driver.find_element(By.XPATH,'/html/body/div[2]/div[2]/div/form/div[2]/input[1]')
    box_phone.send_keys(acc)
    box_pswd.send_keys(pswd)
    botton_login = driver.find_element(By.XPATH,'/html/body/div[2]/div[2]/div/form/div[2]/input[2]') 
    botton_login.click()

def pick_court(court_number):
    botton_court = driver.find_element(By.XPATH,'/html/body/div[2]/section/div[3]/div[2]/div/ul/li[' + court_number + ']/div/a')
    botton_court.click()

today = datetime.datetime.today().weekday()
print("Today is", date.today(), "Week", today+1, "right?")
print("Insert yes/no")
ans = input()
if ans == "no":
    sys.exit()
print("which date you want?")
date_expect = int(input())
print("which court you want?")
court_number = input()
path_driver = os.getcwd() + '\chromedriver.exe'
print(path_driver)
driver = webdriver.Chrome(path_driver)
file = open('user')
for usr in os.listdir():
    line = file.readline().split(',')
    acc = line[0]
    pswd = line[1]
    driver.get("https://17fit.com/NCUsportscenter/01?tab=appointments")
    botton_login = driver.find_element(By.XPATH,'/html/body/div[1]/header/div[1]/div/div[2]/nav/div[2]/a[2]/i') 
    botton_login.click()
    #login
    login(acc, pswd)
    #select badminton
    time.sleep(1)
    botton_appointment = driver.find_element(By.XPATH,'/html/body/div[2]/section/div[3]/div/div[2]/div/div[1]/div[2]/div/div[2]/div[2]/div/div/div/div[2]/div[2]/span[2]/a')
    botton_appointment.click()
    #court select
    pick_court(court_number)
    #date select
    time.sleep(1)
    dates = driver.find_element(By.XPATH, '/html/body/div[2]/section/div[3]/div[2]/div[1]/div/div/div[' +  + ']')
    print(dates)
    time.sleep(10)
    driver.find_element_by_class_name("date-selector-day selected")



    driver.quit()
    break


#//*[@id="day-selector-v2"]/div/div/div[4]
#//*[@id="day-selector-v2"]/div/div/div[5]
#/html/body/div[2]/section/div[3]/div[2]/div[1]/div/div/div[5]
#/html/body/div[2]/section/div[3]/div[2]/div[1]/div/div/div[6]
