for i in range (1,6): 
    username=input('请输入姓名：')
    if username==('戴严') or username==('小明') or username==('小王') :
        print('欢迎登入')
        break
    else:
        print('登录失败，你还有%d次机会'%(5-i))
else:
    print('失败次数过多，无法登入')
page=input('你要干什么\n对话请输入1\n请输入：')
