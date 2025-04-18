# OpenCV 图像边缘检测项目

## 项目概述
本项目实现了基于 OpenCV 的图像边缘检测功能，使用 Canny 算法检测图像中的物体边缘。项目使用 CMake 构建，可在 Windows/Linux/macOS 平台上运行。

## 功能特性
- 图像灰度转换
- 高斯模糊降噪
- Canny 边缘检测
- 多平台支持（Windows/Linux/macOS）
- CMake 构建系统

## 环境要求
- OpenCV 4.x
- CMake 3.10+
- C++11 兼容编译器

## 安装与运行

### 1. 克隆仓库
```bash
git clone https://github.com/yourusername/opencv-edge-detection.git
cd opencv-edge-detection
```

### 2. 构建项目
```bash
mkdir build && cd build
cmake ..
make
```

### 3. 运行程序
```bash
./EdgeDetection [图像路径]
# 示例
./EdgeDetection ../images/test.jpg
```

## 项目结构
```
opencv-edge-detection/
├── CMakeLists.txt          # CMake 配置文件
├── include/               # 头文件目录
├── src/                   # 源代码目录
│   └── main.cpp           # 主程序文件
├── images/                # 测试图像目录
│   ├── test.jpg           # 示例图像
│   └── ...
├── build/                 # 构建目录（自动生成）
└── README.md              # 项目说明文件
```

## 使用示例
1. 将待检测图像放入 `images/` 目录
2. 运行程序并指定图像路径
3. 程序将显示原始图像和边缘检测结果

## 参数调整
可以通过修改 `main.cpp` 中的以下参数优化检测效果：
```cpp
// 高斯模糊核大小（必须是奇数）
cv::GaussianBlur(gray, blurred, cv::Size(5,5), 0);

// Canny 边缘检测阈值
cv::Canny(blurred, edges, 50, 150);
```

## 结果示例
![边缘检测示例](images/result_example.png)

## 贡献指南
欢迎提交 Pull Request 或 Issue。主要改进方向：
- 添加更多边缘检测算法
- 实现实时摄像头检测
- 优化参数调整界面

