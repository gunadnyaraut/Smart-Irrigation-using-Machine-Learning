from sklearn.externals import joblib
import warnings

warnings.filterwarnings("ignore")

clf2 = joblib.load('mnb_clf.pkl')

humidity = 85.
temp = 28.
month = 7

def pred(humidity, temp, month):
    if month in [6, 7, 8, 9]:
        return clf2.predict([humidity, temp])[0]

print (pred(humidity, temp, month))
