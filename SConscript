import os
from building import *

group = []
cwd = GetCurrentDir()
src = []

rtos2_src = Glob('CMSIS_5/CMSIS/RTOS2/Source/*.c')

nn_activation_src = Glob('CMSIS_5/CMSIS/NN/Source/ActivationFunction/*.c')
nn_convolution_src = Glob('CMSIS_5/CMSIS/NN/Source/ConvolutionFunctions/*.c')
nn_fully_connected_src = Glob('CMSIS_5/CMSIS/NN/Source/FullyConnectedFunctions/*.c')
nn_support_src = Glob('CMSIS_5/CMSIS/NN/Source/NNSupportFunctions/*.c')
nn_pooling_src = Glob('CMSIS_5/CMSIS/NN/Source/PoolingFunctions/*.c')
nn_softmax_src = Glob('CMSIS_5/CMSIS/NN/Source/SoftmaxFunctions/*.c')

CPPPATH = [cwd]

if GetDepend('PKG_CMSIS_CORE'):
    CPPPATH = CPPPATH + [cwd + '/CMSIS_5/CMSIS/Core/Include']

if GetDepend('PKG_CMSIS_NN'):
    CPPPATH = CPPPATH + [cwd + '/CMSIS_5/CMSIS/NN/Include']
    if GetDepend('PKG_CMSIS_NN_ACTIVATION'):
        src += nn_activation_src

    if GetDepend('PKG_CMSIS_NN_CONVOLUTION'):
        src += nn_convolution_src

    if GetDepend('PKG_CMSIS_NN_FULLY_CONNECTED'):
        src += nn_fully_connected_src

    if GetDepend('PKG_CMSIS_NN_SUPPORT'):
        src += nn_support_src

    if GetDepend('PKG_CMSIS_NN_POOLING'):
        src += nn_pooling_src

    if GetDepend('PKG_CMSIS_NN_SOFTMAX'):
        src += nn_softmax_src

if GetDepend('PKG_CMSIS_RTOS2'):
    CPPPATH = CPPPATH + [cwd + '/CMSIS_5/CMSIS/RTOS2/Include']
    # src = src + rtos2_src

group = DefineGroup('CMSIS', src, depend = ['PKG_USING_CMSIS'], CPPPATH = CPPPATH)
group += SConscript('src/SConscript')

Return('group')
