<h1 align="center">
  <img  width="90" src="https://user-images.githubusercontent.com/19689770/129336866-169b0dc7-ea41-47d4-b50a-d466508031af.png">
  
	🧰 ft_printf
 </img>
	<sub><sub>Project status</sub></sub></br>
	<sub><a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl9mxvq9700780hl4msqc8saj/project/2280437" alt="khammers's 42 ft_printf Score" /></a></sub></br>
</h1>
</br>


<p align="center">
	<b>Printing output with format specifiers by using variadic arguments</b></br>
	Start date: 05/august/2021 </br>
</p>

<p align="center">
	<img alt="Github code size in bytes" src="https://img.shields.io/github/languages/code-size/KHammerschmidt/42cursus-ft_printf"/>
	<img alt="Github repo size" src="https://img.shields.io/github/repo-size/KHammerschmidt/42cursus-ft_printf?color=orange"/>
	<img alt="Languages used in repo" src="https://img.shields.io/github/languages/count/KHammerschmidt/42cursus-ft_printf?color=red&label=languages%20used%20in%20repo"/>
	<img alt="Top used progamming language" src="https://img.shields.io/github/languages/top/KHammerschmidt/42cursus-ft_printf?color=yellow"/>	
</p>

<h3 align="center">
	<a href="-about">About</a>
	<span> · </span>
	<a href="-format-specifiers-explained">Format specifiers</a>
	<span> · </span>
	<a href="#-usage">Usage</a>
</h3>


## 💡 About the project
> The aim of this project is to re-code ``` libc ```'s printf function with the conversions:<br/>
' c ', ' s ', ' p ', ' d ', ' i ', ' u ', ' x ', ' X ' and ' % '.
<br/>

**Requirements** </br>

Here are the requirements:
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
• Don’t implement the buffer management of the original printf().
• Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.
</br>

**Key learning points**
  - Handling variadic arguments
  - Organising a complex project with various sub-functions & libraries in sub-directories

</br>

---

### Format specifiers explained
| Specifier	| Meaning																|
| ----------|-----------------------------------------------------------------------|
| * [`c`]	| Prints a single character   				   							|
| * [`s`]	| Prints a string (as defined by the common C convention) 				|
| * [`p`]	| The void * pointer argument has to be printed in hexadecimal format   |
| * [`d`]	| Prints a decimal (base 10) number 									|
| * [`i`]	| Prints an integer in base 10											|
| * [`u`]	| Prints an unsigned decimal (base 10) number							|
| * [`x`]	| Prints a number in hexadecimal (base 16) lowercase format				|
| * [`X`]	| Prints a number in hexadecimal (base 16) uppercase format				|
| * [`%`]	| Prints a percent sign 												|
</br>

## 🛠️ **Usage**
 Use: To compile library libftprintf.a and build the executable ft_printf use the command ``` make ``` <br/>
 Libft project is required for compilation.
 
![Bildschirmfoto 2022-09-26 um 23 24 46](https://user-images.githubusercontent.com/80644370/192383696-04d7902f-c261-4a40-b11d-3a2060500570.png)

