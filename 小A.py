print('你好主人,我是小A')
order=input('你想干什么：')
if order==('小A'):
    order=input('我在,有什么是：')
elif order==('打开哔哩哔哩')or order==('哔哩哔哩')or('bilibili'):
    print('没问题')
    import os 
    os.system('"C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe" http://www.bilibili.com')
elif order==('打开github')or order==('github'):
    print('没问题')
    import os 
    os.system('"C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe" http://www.github.com')
elif order==('打开浏览器')or ('打开edge')or('浏览器')or('edge')or('我要搜索'):
    print('没问题')
    import os 
    os.system('"C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe"')



