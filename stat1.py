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