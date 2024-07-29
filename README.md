# SpectraEngine
Spectra Engine is a game engine that is used alongside C++ to make games. It contains a range of features to make games and develop the games that you wish (More features coming, still in devleopment).

## Features
- [X] File Saving
- [X] Shape Definition
- [ ] Shape Rendering
- [ ] Input Systems
- [ ] Window Customisation

# Documentation
## SpectraFile.h
For each file that you want to make, you start by creating a new file class
``` c++
file SaveData;
```

If you want to add more data to the file that you have created
``` c++
SaveData.AddData("Testing");
```

If you want to save the data that you've added to the class
``` c++
SaveData.SaveDataToFile("filename.txt")
```
replace filename.txt with the name that you want the file to have

You can clear the data
``` c++
SaveData.ClearDataStore();
```

### Options
There are some options that you can change in the file class too
``` c++
SaveData.OverwriteData = true; //(Default) This is if the data gets overwritted each save, or is appended on top
```

## SpectraShapes.h
This header is for the definition of shapes, these are used in the rendering of shapes in the engine.
> THIS IS NOT THE WAY TO RENDER THE SHAPES, THESE JUST DEFINE THE SHAPES TO BE USED WHEN RENDERING

### Rectangles
```c++
Rect(10, 10, 10, 10);
```
The first two arguments define the position on the X and Y axis that it will be renderd, and the Last two define the Width and Height of the Rectangle.

### Circle
```c++
Circle(10, 10, 5);
```
The first two arguments define the x and y that the circle will be rendered at, and the final one is the radius of the circle that will be rendered.
