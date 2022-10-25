#Importing tkinter module
from tkinter import *
#importing calendar module
import calendar

#function to show calendar of the given year
def showCalender():
    gui = Tk()
    gui.config(background='grey')
    gui.title("Calender for the year")
    gui.geometry("550x600")
    year = int(year_field.get())
    gui_content= calendar.calendar(year)
    calYear = Label(gui, text= gui_content, font= "Consolas 10 bold")
    calYear.grid(row=5, column=1,padx=20)
    gui.mainloop()
