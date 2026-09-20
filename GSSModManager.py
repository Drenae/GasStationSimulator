import tkinter as tk
from pathlib import Path

ROOT = Path(__file__).resolve().parent
CONFIG = ROOT / "ue4ss" / "Mods" / "GSSModManager" / "config.ini"

OPTIONS = [
    ("station_fuel", "Carburant infini - Station"),
    ("airport_fuel", "Carburant infini - Aéroport"),
    ("max_traffic", "Trafic maximum"),
    ("max_contract_points", "Points de contrat maximum"),
    ("max_blueprints", "Plans maximum"),
    ("cheap_employees", "Employés gratuits"),
    ("max_warehouse", "Capacité entrepôt 999 999"),
]

def read_config():
    data = {k: True for k, _ in OPTIONS}
    if CONFIG.exists():
        for line in CONFIG.read_text(encoding="utf-8").splitlines():
            if "=" in line:
                k, v = line.split("=", 1)
                if k.strip() in data:
                    data[k.strip()] = v.strip().lower() in ("true", "1", "on", "yes")
    return data

def write_config():
    CONFIG.parent.mkdir(parents=True, exist_ok=True)
    CONFIG.write_text("\n".join(f"{k}={'true' if vars[k].get() else 'false'}" for k, _ in OPTIONS) + "\n", encoding="utf-8")
    status.config(text="Appliqué en direct")

root = tk.Tk()
root.title("GSS Mod Manager")
root.geometry("420x390")
root.resizable(False, False)

tk.Label(root, text="GAS STATION - MOD MANAGER", font=("Segoe UI", 16, "bold")).pack(pady=(18, 12))
frame = tk.Frame(root)
frame.pack(fill="x", padx=28)

current = read_config()
vars = {}
for key, label in OPTIONS:
    vars[key] = tk.BooleanVar(value=current[key])
    tk.Checkbutton(frame, text=label, variable=vars[key], command=write_config, font=("Segoe UI", 11), anchor="w").pack(fill="x", pady=5)

status = tk.Label(root, text="Les changements sont appliqués sans redémarrer le jeu.", font=("Segoe UI", 9))
status.pack(pady=16)
write_config()
root.mainloop()
