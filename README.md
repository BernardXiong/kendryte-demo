
# Kendryte Demo软件包

这个软件包仅配合Kendryte SDK而简单移植的demo软件包，可以在RT-Thread下简单的选择对应的demo，然后通过在msh命令行下
执行

    msh /> exec_demo

来简单的执行对应的demo。

请注意，这个仅是demo的软件包，所以仅仅是让demo的代码跑起来。因为demo代码编写的缘故，基本上运行demo后，命令行就会
卡死在demo循环中。仅用于评估、使用demo。如果需要做更多的功能，需要对demo代码按照RT-Thread的方式进行更改。
