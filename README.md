README
===

## Description

**vlfeat_android**: VLfeat under Andrioid, JNI/NDK with VLfeat-v0.9.19


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

I tried my best to keep the source code as the same as original vlfeat code(v0.9.19), but actually some features are for PC or x86-architecture, so it's not for Andriod or mobile device, but just keep it and do some modification according to your project needs.

## System requirement

* VLfeat 0.9.19
* OpenCV 2.4.9
* Andriod Level 16+


## Some related resources

An vlfeat+opencv+andriod application, **mcreader**: https://github.com/deercoder/mcreader

Andriod NDK tutorial: http://developer.android.com/tools/sdk/ndk/index.html

OpenCV guide for android: http://docs.opencv.org/doc/tutorials/introduction/android_binary_package/dev_with_OCV_on_Android.html

Android Build: http://developer.android.com/ndk/guides/android_mk.html


## Future

Any further development are all welcomed, and feel free to contract me if you have any questions. This project serves as my toy project to play with Vlfeat, and by learning the building system of vlfeat and Android, I learned a lot how it works in Andriod-JNI, and how vlfeat organize their files and make the whole project, I think it should be very helpful if you want to add libs/src to your project using these knowledge.
