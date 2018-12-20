from building import *

cwd = GetCurrentDir()
src = Glob('*.c')
CPPPATH = [cwd]
LOCAL_CPPDEFINES = ["main=exec_demo"]

if GetDepend('KENDRYTE_DEMO'):
    demo = GetDepend('KENDRYTE_DEMO').replace('"', '')
    src += Glob('kendryte-standalone-demo/' + demo + '/*.c')
    LOCAL_CPPPATH = [cwd + '/kendryte-standalone-demo/' + demo + '/']

group = DefineGroup('demo', src, depend = ['PKG_USING_KENDRYTE_DEMO'], LOCAL_CPPPATH = LOCAL_CPPPATH, LOCAL_CPPDEFINES = LOCAL_CPPDEFINES)

Return('group')
