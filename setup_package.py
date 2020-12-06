#!/usr/bin/env python
import argparse
import os


def create_dir(f_path):
    try:
        os.mkdir(f_path)
    except OSError:
        print("Creation of the directory %s failed" % f_path)
    else:
        print("Successfully created the directory %s " % f_path)


parser = argparse.ArgumentParser(
    description="Setup package for creating design patterns examples.")
parser.add_argument("name", type=str,
                    help="Name of design pattern")

args = parser.parse_args()
args.name = args.name + "_Pattern"
print("Package folder " + args.name + " created.")

# Create Folders
src = os.path.join(args.name, "src")
include = os.path.join(args.name, "include")
build = os.path.join(args.name, "build")

create_dir(args.name)
create_dir(src)
create_dir(include)
create_dir(build)

src_file_name = args.name.lower() + "_node.cpp"
cmake_file_name = os.path.join(args.name, "CMakeLists.txt")

# Create CMakeList
cmake_file = open(cmake_file_name, "w+")
cmake_file.write("cmake_minimum_required(VERSION 3.0.0)\n")
cmake_file.write("project(%s VERSION 0.1.0)\n" % args.name.lower())
cmake_file.write("include_directories(include)\n")
cmake_file.write("add_executable(%s %s)\n" %
                 (args.name.lower(), "src/" + src_file_name))
cmake_file.close()
print("CMake file created")

# Create Source File
src_file = os.path.join(src, src_file_name)
os.mknod(src_file)
print("Source file created")
