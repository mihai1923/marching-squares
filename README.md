# Marching Squares Contour Generator

A C implementation of the Marching Squares algorithm for generating contours from PPM (P3) images. This program processes images to detect and draw contours based on luminance thresholds, providing both grid analysis and visual output.

## Features

- **Read PPM Images**: Supports reading P3 format images with proper validation.
- **Grid Generation**: Computes a binary grid based on luminance thresholds.
- **Contour Lookup Tables**: Utilizes 16 predefined contour patterns for drawing.
- **Image Resizing**: Upscales images by a factor of 4x.
- **Marching Squares Application**: Applies the algorithm to generate contour lines.
- **Command-Line Interface**: Interactive commands for processing images step-by-step.

## Prerequisites

- **C Compiler**: GCC or another C compiler.
- **Standard Libraries**: Uses `<stdio.h>`, `<stdlib.h>`, and `<string.h>`.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/mihai1923/marching_squares
   cd marching_squares
   ```

2. Compile the code:
    ```shell
    gcc marching_squares.c -o marching_squares
    ```

## Usage

Run the program and enter commands interactively:
```shell
./marching_squres
```

## Commands

| Command       | Description                                                                 |
|---------------|-----------------------------------------------------------------------------|
| `READ`        | Load a P3 PPM image. Prompts for width, height, and pixel data.             |
| `WRITE`       | Output the current image in P3 format.                                     |
| `GRID`        | Compute and display the binary grid based on luminance (threshold: α=200). |
| `INIT_CONTOUR`| Print all 16 contour patterns (lookup tables).                             |
| `RESIZE`      | Upscale the image by 4×.                                                   |
| `MARCH`       | Apply the Marching Squares algorithm to draw contours.                     |
| `EXIT`        | Exit the program.                                                         |

---

## Example Workflow

1. **Load an Image:**

   ```bash
   READ

2. **Generate Grid:**
    ```bash
    GRID
    ```

3. **Apply Contours:**
    ```bash
    MARCH
    ```

4. **Save/View Result:**
   ```bash
   WRITE
   ```

5. **Exit:**
   ```bash
   EXIT
   ```
