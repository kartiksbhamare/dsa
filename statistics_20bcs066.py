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
def dependent_samples_t_test(data1, data2,  t_tab ,level_of_significance):
    
    n = len(data1)
    D = []

    for i in range(len(data1)):
        D.append(data1[i]-data2[i])

    sum_D = sum(D)
    square_D = sum([x**2 for x in D])

    SD = math.sqrt((n*square_D - math.pow(sum_D, 2))/(n*(n-1)))
    SD_bar = SD/math.sqrt
    D_bar = sum_D/n

    t_cal = (D_bar)/SD_bar

    if (abs(t_cal) <= t_tab):
        print(f"t-calculated is {t_cal} \n")
        print(f"Ho is accepted at {level_of_significance} level of significance")
    else:
        print(f"t-calculated is {t_cal} \n")
        print(f"Ho is rejected at {level_of_significance} level of significance")


def one_sample_proportion_z_test(p  ,n ,passed ,z_tab ,level_of_significance):

    p_bar = (passed/n)
    z_cal = (p_bar - p) / math.sqrt((p*(1-p))/n)
    z_cal = np.round(z_cal ,3)

    if (abs(z_cal) <= z_tab):
        print(f"z-calculated is {z_cal} \n")
        print(f"Ho is accepted at {level_of_significance} level of significance")
    else:
        print(f"Ho is rejected at {level_of_significance} level of significance")

    return np.round(z, 3)