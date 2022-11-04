import math as math
import numpy as np

table_z = {'95%': 1.96, "99%": 2.576, "90%": 1.645}


def oneSampleZTest(data, population_mean, level_of_significance):

    sample_avg = sum(data)/len(data)
    n = len(data)
    standered_deviation = np.std(data)

    z_calculated = (sample_avg - population_mean) / \
        (standered_deviation/math.sqrt(n))

    z_tab = table_z[level_of_significance]

    if (z_calculated <= z_tab):
        print("Ho is acceptedd")
    else:
        print("rejected ho")


def oneSampleZTestFor_given_values(n, population_mean, sample_avg, standered_deviation, level_of_significance):

    z_calculated = (sample_avg - population_mean) / \
        (standered_deviation/math.sqrt(n))

    z_tab = table_z[level_of_significance]

    if (z_calculated <= z_tab):
        print("Ho is accepted")
    else:
        print("Ho is rejected")

    return np.round(z_calculated, 3)


def confidence_intervel_for_oneSampleTest(n, population_mean, sample_avg, standered_deviation, level_of_significance):

    maxxx = sample_avg + (standered_deviation/math.sqrt(n)) * \
        table_z[level_of_significance]
    minii= sample_avg - (standered_deviation/math.sqrt(n)) * \
        table_z[level_of_significance]

    print(minii+" meu " + maxxx)


# two sample z-test
def twoSampZ(X1, X2, mudiff, sd1, sd2, n1, n2, level_of_significance):

    z_tab = table_z[level_of_significance]
    pooledSE = math.sqrt(sd1*2/n1 + sd2*2/n2)
    z = ((X1 - X2) - mudiff)/pooledSE

    if (z < z_tab):
        print("aceepted ho")

    if (z < z_tab):
        print("rejected ho")

    return np.round(z, 3)