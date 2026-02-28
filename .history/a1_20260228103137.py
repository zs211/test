import os

# 第一步：指定要遍历的目录（你的日志目录）
target_dir = "/var/log/robot"

# 第二步：核心循环（固定写法，记死）
for root, dirs, files in os.walk(target_dir):
    # 打印当前扫到的目录
    print(f"==== 正在扫描目录：{root} ====")
    
    # 打印当前目录里的子目录
    print(f"该目录下的子目录：{dirs}")
    
    # 打印当前目录里的文件
    print(f"该目录下的文件：{files}")
    print("-" * 20)