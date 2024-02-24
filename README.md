<div align="center">
  
<img src="https://user-images.githubusercontent.com/49791407/210035641-f62a010e-627c-4e4b-a758-2c360f1080b8.png"></img>
**View any first-order differential equation of the form $\frac{dy}{dx} = f(x, y)$ as a slope field.**

</div>

<br>

![](https://img.shields.io/badge/Python-3776AB?style=flat&logo=python&logoColor=blue&color=white) 
![](https://img.shields.io/tokei/lines/github/AJM432/Differential-Equation-Visualizer) 
![](https://img.shields.io/github/repo-size/AJM432/Differential-Equation-Visualizer?style=flat)


## Usage
In terminal enter the following commands. You must have C++, SFML and Make configured on your system.
```bash
git clone https://github.com/AJM432/Differential-Equation-Visualizer.git
cd Differential-Equation-Visualizer
make
./main
```

To change the differental equation shown, follow these steps using vim or any text editor. First navigate to the root folder.
```bash
vim src/SlopeField.cpp
```

Then edit the function called eval_dydx by changing the return value to the desired function to be visualized.

```cpp
// differential equation input
double SlopeField::eval_dydx(double x, double y)
{
	return pow(2.71, y);
}
```

## Screenshots & Videos

## $\frac{dy}{dx} = \frac{-x}{y}$
![circle_derivative](https://user-images.githubusercontent.com/49791407/178153593-e4d2dbbd-4cfb-4ebb-b060-74bf8aafd124.png)

## $\frac{dy}{dx} = y$
![e^x](https://user-images.githubusercontent.com/49791407/178154857-8f7ddbf2-ce2b-4cf7-83b7-dd323891ebdc.png)

## Extending slope lines and varying the parameters of $\frac{dy}{dx} = \frac{-x}{y}$
https://github.com/AJM432/Differential-Equation-Visualizer/assets/49791407/a92b7a5e-2882-457b-a27f-1fe93ae984b3

