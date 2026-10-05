import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv("/home/vlb5111a/Documents/eqdiff/oscillateur/oscillateur.csv")

x = df["x"]
y = df["y"]

 # Définir la taille de la figure
plt.figure(figsize=(8, 5))
plt.plot(x, y, marker="o", linestyle="-", color="b")

#titre des axes

plt.title("y=f(x)")
plt.xlabel("x")
plt.ylabel("y")
plt.grid(True)
plt.show()