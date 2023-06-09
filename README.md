<h1>
	<p align="center">ft_printf</p>
	<img align="right" alt="Final Grade: 104/ 100%" src="https://img.shields.io/badge/-%20104%20%2F%20100-success">
</h1>
<p align="center">
	<b><i>Because ft_putnbr() and ft_putstr() aren’t enough</b></i>
</p>
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/WudDoo/ft_printf">
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/WudDoo/ft_printf">
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/WudDoo/ft_printf">
</p>

## 💡 About

> _The goal of this project is pretty straightforward. You will recode printf().
You will mainly learn about using a variable number of arguments. How cool is that??
It is actually pretty cool :)_

	This project basically consists of writing a libray that contains a simplified version
	of the printf function.
<br>

## 🛠️ Usage

### **1. Cloning**

To clone, run:
```ZSH
git clone https://github.com/WudDoo/ft_printf.git
```

### **2. Compiling**

To compile, run `make` at the root of the `ft_printf` directory.


### **3. Using it**

To use my ft_printf, simply include its header with the correct path in your code:

```C
#include "<PATH>/ft_printf.h"
```

And compile your code with my static library `libftprintf.a`:

```C
$(CC) $(CFLAGS) $(YOUR_SRCS) $(<PATH>/libftprintf.a)
```
