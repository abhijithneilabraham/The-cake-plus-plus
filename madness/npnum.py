#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 15:38:38 2020

@author: abhijithneilabraham
"""
import re
x=["checkforfilename"]
y=x[0].split("_")
#y=[[i] for i in y]
print(y)
delimiters = " ", "_",
regexPattern = '|'.join(map(re.escape, delimiters))
text=['Function_GetmobDuckLuck']
text=re.split(regexPattern, text[0])
print(text,'(regex)')
while '' in text:text.remove('')
print(text,'(nullvalues)')
def camel_case_split(txt): 
    a=[]
    k=0
    for i,j in enumerate(txt):
        if j.isupper() and i!=0:
            a.append(txt[k:i])
            k=i
    a.append(txt[k:])
    return a
n=[]
for i in text:
    n+=camel_case_split(i)
print(n)
    
import numpy as np
c=[0 for i in range(3)]
a=np.asarray([1,2,3])
b=np.asarray([3,2,1])
d=[a,b]
for i in d:
    c+=i
print(c)
