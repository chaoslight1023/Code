for i in range (1,6):
    username=input('请输入姓名：')
    if username==('戴严'):
        print('欢迎登入')
        break
    else:
        print('你还有%d次机会'%(5-i))
else:
    print('失败次数过多，无法登入')
