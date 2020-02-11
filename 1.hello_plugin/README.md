# Hello world Plugin

## 목표
- Plugin 빌드 
- Plugin 소스 구조 파악 

## build 방법 
- 실습 코드 git clone
```
> mkdir ~/project
> cd ~/project
> git clone https://github.com/Jaeeunykim/Gazebo_Practice.git
```

- build 디렉토리 생성
```bash
> cd ~/projects/Gazebo_Practice/1.hello_plugin/
> mkdir build 
```    
- Plugin 빌드
```bash
> cd build
> cmake ..
> make
```
## 환경변수 설정
- export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${PX4_Simulation}/demo/velodyne_plugin/build
```bash
> export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)
```
## 실행 
```bash
> cd ~/projects/Gazebo_Practice/1.hello_plugin
> gzserver --verbose ./hello.world
```

## 결과
![](./result_image.png)