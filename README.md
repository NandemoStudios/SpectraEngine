# SpectraEngine
Spectra Engine is a game engine that is used alongside C++ to make games. It contains a range of features to make games and develop the games that you wish (More features coming, still in devleopment).

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
