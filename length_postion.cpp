'''body-coxa position inferred from CT-scan'''
body_coxa = np.array([[-0.88950,-0.77869,-1.71708], [-0.75701,-0.90887,0.58569],[-0.47809,-0.50494,1.28127],    # left
                      [  0.8859,-0.77502,-1.70955], [ 0.75058,-0.90576,0.5868], [0.47586,-0.5,1.2777]])         # right
body_coxa



'''24 leg parts length inferred from CT-scan  (the length of tarsus is meaningless)''' 
'''  left front  +  left middle  + right hind '''
length_ct = np.array([[1.89088, 3.23936, 2.08078, 4.4],[1.14195, 3.91499, 3.15936, 4.4], [1.36256, 3.80671, 3.5816, 5]])
