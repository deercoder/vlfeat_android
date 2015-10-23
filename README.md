README
===

## Target

[VLFeat](http://www.vlfeat.org/) implements popular computer vision algorithms specializing in image understanding and local features extraction and matching. Algorithms include Fisher Vector, VLAD, SIFT, MSER, k-means, hierarchical k-means, agglomerative information bottleneck, SLIC superpixels, quick shift superpixels, large scale SVM training, and many others

However, it only provides C and MATLAB interface, which means most of the users can only use them in the offline, limiting its application in PC or server. **Our target of this project is to port them into andriod platform to make it support the mobile development, especially in classification, detection and image processing**


## What I done(VLfeat, OpenCV, Andriod)

There are a few steps to port all the source code to andriod, what I used here is Andriod JNI with OpenCV. I copied the source code of vlfeat, build a new JNI project that contains such source code, write the new `Andriod.mk` to build in Andriod.

Most importantly, it's not such easy to build under Andriod. We should use **NDK-build** instead of some PC-tools like GNU-gcc or Microsoft Visual Studio, so some dependences needs to be fixed for compiles, for details of modification, please check each commit in this repo.

Overall, some of my modification includes:

* Add Macros to avoid SSE and ADX compile error.
* Fix some Macro scope in vlfeat source code since they will cause some function implementations missing.
* Fix some math function compile error


## Future

Any further development are all welcomed, and feel free to contract me. This project serves as my toy project to play with Vlfeat, and by learning the building system of vlfeat and Android, I learned a lot how it works in Andriod-JNI, and how vlfeat organize their files and make the whole project, I think it should be very helpful if we want to add libs/src to your project using these knowledge.
