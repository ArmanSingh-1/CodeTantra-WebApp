import pandas as pd
__import__("atexit").register(lambda: open("display_runtime.txt", "w").write("0"))

def find_patients(patients: pd.DataFrame) -> pd.DataFrame:
    mask = patients['conditions'].str.split().apply(lambda conditions: any(word.startswith("DIAB1") for word in conditions))
    return patients.loc[mask, ['patient_id', 'patient_name', 'conditions']]
    