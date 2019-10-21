#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Apr  3 01:54:18 2019

@author: abhijithneilabraham
"""

from pattern.web import Twitter
from pattern.en import tag
from pattern.vector import KNN, count

twitter, knn = Twitter(), KNN()

for i in range(1, 3):
    for tweet in twitter.search('#github OR #kaggle', start=i, count=100):
        s = tweet.text.lower()
        p = '#github' in s and 'WIN' or 'FAIL'
        v = tag(s)
        v = [word for word, pos in v if pos == 'JJ'] # JJ = adjective
        v = count(v) # {'sweet': 1}
        if v:
            knn.train(v, type=p)

print(knn.classify('sweet potato burger'))
print(knn.classify('stupid autocorrect'))