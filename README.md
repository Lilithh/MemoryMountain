###环境：

gcc，matlab

### 使用

0. 配置matlab：（MacOs，win下可查官网）
   - `sudo vim /etc/profile`  进入环境变量文件，按i编辑
   - `export PATH=/Applications/MATLAB_R2017b.app/bin:$PATH` 写入这段，esc后按`:qw`保存
   - `source /etc/profile` 配置生效
1. 在终端（win下打开命令行），cd到 **MemoryMountain** 目录下，执行 `make`命令,生成 *mountain* 可执行文件
2. 执行 `./mountain` 命令，跑出数据矩阵（显示在终端中）
3. 在目录下新建（`touch data.txt`）*data.txt*文本文件，将**完整数据** 拷贝到该文件中
4. 在终端执行命令 `matlab -nodesktop -nosplash -r "display_mountain data.txt"`,等计算机加载完毕，即在屏幕上出现*matlab*所绘制好的图形窗口

###生成效果如下：

![示意图](./Support/mountain.png)
