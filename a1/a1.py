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




# 1. 定义目标目录和允许的后缀（和你config.py里一致）
target_dir = "/var/log/robot"
allowed_exts = [".log", ".txt", ".out", ".err"]

# 2. 空列表存找到的日志文件（完整路径）
log_files = []

# 3. 遍历目录
for root, dirs, files in os.walk(target_dir):
    # 遍历当前目录下的所有文件
    for filename in files:
        # 第一步：取文件后缀（转小写，避免大写.LOG漏判）
        file_ext = os.path.splitext(filename)[1].lower()
        
        # 第二步：判断是否是允许的日志文件
        if file_ext in allowed_exts:
            # 第三步：拼接完整路径（关键！只拿文件名找不到文件）
            full_path = os.path.join(root, filename)
            log_files.append(full_path)

# 4. 打印结果
print(f"总共找到 {len(log_files)} 个日志文件：")
for file in log_files:
    print(file)