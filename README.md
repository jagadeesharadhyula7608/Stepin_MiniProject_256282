|Build|Unit Test|cppcheck|Valgrind|Codacy|Coverage|
|:--:|:--:|:--:|:--:|:--:|:--:|
|[![C/C++ CI](https://github.com/jagadeesharadhyula7608/Stepin_MiniProject_256282/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/jagadeesharadhyula7608/Stepin_MiniProject_256282/actions/workflows/c-cpp.yml)|[![Unit_Testing](https://github.com/jagadeesharadhyula7608/Stepin_MiniProject_256282/actions/workflows/unit_test.yml/badge.svg)](https://github.com/jagadeesharadhyula7608/Stepin_MiniProject_256282/actions/workflows/unit_test.yml)|![cppcheck-action](https://github.com/stepin654321/MiniProject_Template/workflows/cppcheck-action/badge.svg)|![Valgrind](https://github.com/stepin654321/MiniProject_Template/workflows/Valgrind/badge.svg)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/3ac7e2a959a24fa4b5d1b9c1c886ff75)](https://www.codacy.com/manual/stepin654321/MiniProject_Template?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=stepin654321/MiniProject_Template&amp;utm_campaign=Badge_Grade)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/3ac7e2a959a24fa4b5d1b9c1c886ff75)](https://www.codacy.com/manual/stepin654321/MiniProject_Template?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=stepin654321/MiniProject_Template&amp;utm_campaign=Badge_Grade)|




# Computation of Transmission Line Parameters in Power Systems
![Transmission Line image](https://4.imimg.com/data4/XK/RN/MY-15740765/overhead-transmission-line-500x500.jpg) 

## Transmission Line
Transmission line is the long conductor with special design (bundled) to carry bulk amount of generated power at very high voltage from one station to another as per variation of the voltage level.
## Types of Transmission Line
In transmission line determination of voltage drop, transmission efficiency, line loss etc. are important things to design. These values are affected by line parameter R, L and C of the transmission line. Length wise transmission lines are three types.
###  [Short Transmission Line](https://www.electrical4u.com/short-transmission-line/)
A short transmission line is classified as a transmission line with:
- A length less than 80km (50 miles)
- Voltage level less than 69 kV
- Only resistance and inductance are taken in calculation capacitance is neglected.
### [Medium Transmission Line](https://www.electrical4u.com/medium-transmission-line/#:~:text=A%20medium%20transmission%20line%20is,250%20km%20(150%20miles).)
A medium transmission line is classified as a transmission line with:
- A length more than 80 km (50 miles) but less than 250 km (150 miles)
- Operational voltage level is from 69 kV to approx 133 kV
- Capacitance effect is present
- Distributed capacitance form is used for calculation purpose.
### [Long Transmission Line](https://www.electrical4u.com/long-transmission-line/#:~:text=A%20long%20transmission%20line%20is,250%20km%20(150%20miles).&text=In%20a%20long%20transmission%20line,the%20entire%20length%20of%20line.)
A long transmission line is classified as a transmission line with:
- A length more than 250 km (150 miles)
- Voltage level is above 133 kV
- Line constants are considered as distributed over the length of the line.

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
`5_Report`         | Documents with overall report
`6_ImagesAndVideos`| Related Videos and images regarding project
`7_Other`          | Related other documents

My SFID is 256282

## GitHub Actions
* Build using Make for CI
* Unit tests with Cunit
* Static code analysis using cppcheck
* Dynamic Code analysis using Valgrind
