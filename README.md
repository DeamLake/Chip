# Chips Engine
Thank you for Cherno's Game Engine series

You can also find the videos at [The Cherno 's Game Engine](https://www.youtube.com/playlist?list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT)

Cherno name the Engine "Hazel"

But I like chips :)

# Components Lists

- [x] Entrypoint
- [x] Application
- [x] Logging System
- [ ] Window Layer
    - [ ] Input
    - [ ] Events
- [ ] Render
- [ ] Render API Abstracion
- [ ] Debuging support
- [ ] Scripting language
- [ ] Memory
- [ ] Entity Component System (ECS)
- [ ] Physics
- [ ] File I/O, Virtual File System
- [ ] Build System
# Using

Double Click GenerateProjects.bat

And then open Chips.sln

## Notice

When you first Build the project you will meet an error

Just ignore it and build again

# Details

## EntryPoint and Application

We hide the EntryPoint file in Chips Project 

extern the function CreateApplication and call this function in the file 

So we just need to define a class derived from class Application

and implement CreateApplication function to return your class object

Then EntryPoint will call your class's Run to run the Whole project

## Logging System

We use **spdlog** to implement the logging system

And define two static loggers and micros to use it easily

You can find this library at [spdlog](https://github.com/gabime/spdlog/tree/b1478d98f017f3a7644e6e3a16fab6a47a5c26ba)

