# Arduino_PROJECT : Controlling an elevator model

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#configuration">Configuration</a></li>
        <li><a href="#List of components used">List of components used</a></li>
        <li><a href="#tinkerCAD">tinkerCAD</a></li>
        <li><a href="#function list">Function List</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#flowchart">Flowchart</a></li>
        <li><a href="#implemented video">Implemented video</a></li>
      </ul>
    </li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

### Configuration
- 최소 3층 이상 엘레베이터 구현
- 엘레베이터의 현재 위치를 나타내는 LED 구성
     - 1층,2층,3층 : RED
     - 층간 사이 2개씩 총 4개 : YELLOW
- 각 층마다 호출 버튼 있어야 함
- 각 층마다 호출 상태를 나타내는 LED 있어야 함

### List of components used
![스크린샷 2024-02-05 210339](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/50846616-ab6d-4382-ab6a-3bd80b9591c2)


### tinkerCAD
![스크린샷 2024-02-04 235710](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/739296e2-a06f-4a08-ac75-ecb06dd683e1)
![pic](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/d5d5edc5-8ae1-469e-a95b-8b5bb6958583)

### Function List
![Functional list](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/4c7af3b2-e81d-4ba1-88ca-2b11b12fd413)

---
## Getting Started
### Prerequisites

First you must download Arduino IDE "https://www.arduino.cc/" 
  
* Troubleshooting
  ```sh
  sudo add-apt-repository universe
  sudo apt install libfuse2
  ```
  ⇒ 만약 AppImage 설치 후 동작에 문제가 있는 경우 (Files > Examples 가 안열리는 경우 등)
  
* Truobleshooting
  - 다음과 같은 에러가 발생한다면 권한을 주고나서 재부팅 : avrdude: ser_open(): can't open device "/dev/ttyACM0": Permission denied
  - 방법 1
  ```sh
  sudo chomd a+rw /dev/ttyACM0
  ```
  
  - 방법 2
  ```sh
  sudo usermod -a -G dialout <username>
  혹은
  sudo chmod a+aw /dev/ttyACM0
  ```
  ### Flowchart
![Elevator_project drawio](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/c504c0c0-1275-49a2-91a7-c31404421e3e)

  ![스크린샷 2024-02-04 174643](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/15488067-61ec-42fc-a2e8-701447fcb996)
  ![스크린샷 2024-02-04 173714](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/b0aa13b6-979f-4350-ac7b-c4fe885c23ed)
  ![스크린샷 2024-02-04 174011](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/b9071415-347b-4f4b-9550-82ab4af7b3b8)
  ![스크린샷 2024-02-04 174809](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/c6dd88c4-1bde-499d-8308-842653cee343)



  ### Implemented video
  ![simulation](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/f2552daa-78b7-4d92-a9f4-6e926e63c5e0)
  ![video](https://github.com/AUTO-KKYU/Arduino_PROJECT/assets/118419026/00b8ab16-8c4d-4982-9a1e-226da82bb292)

