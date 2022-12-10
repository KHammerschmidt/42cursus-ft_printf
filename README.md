<h1 align="center">
  <img  width="90" src="https://user-images.githubusercontent.com/19689770/129336866-169b0dc7-ea41-47d4-b50a-d466508031af.png">
  
	🧰 ft_printf
 </img>

</h1>
</br>


<p align="center">
	<b>Printing output with format specifiers by using variadic arguments</b></br>
	Start date: 05/august/2021 </br>
	<sub> Project status: completed 100/100 points </sub>
</p>

<p align="center">
	<img alt="Github code size in bytes" src="https://img.shields.io/github/languages/code-size/KHammerschmidt/42cursus-ft_printf"/>
	<img alt="Github repo size" src="https://img.shields.io/github/repo-size/KHammerschmidt/42cursus-ft_printf?color=orange"/>
	<img alt="Languages used in repo" src="https://img.shields.io/github/languages/count/KHammerschmidt/42cursus-ft_printf?color=red&label=languages%20used%20in%20repo"/>
	<img alt="Top used progamming language" src="https://img.shields.io/github/languages/top/KHammerschmidt/42cursus-ft_printf?color=yellow"/>	
</p>

---

## 💡 About the project
> The aim of this project is to re-code ``` libc ```'s printf function with the conversions:<br/>
' c ', ' s ', ' p ', ' d ', ' i ', ' u ', ' x ', ' X ' and ' % '.
<br/>

**Requirements** </br>

• The function has to handle the following conversions: cspdiuxX% </br>
• The function will be compared against the original printf() </br>
• To create the library command ar must be used </br>
• Don’t implement the buffer management of the original printf() </br>
• Using the libtool command is forbidden </br>
• Executable libftprintf.a has to be created at the root of your repository </br>
</br>

**Key learning points**
  - Handling variadic arguments
  - Organising a complex project with various sub-functions & libraries in sub-directories

</br>


## 🌁  Format specifiers explained
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


Clone the repository:
```bash
git clone https://github.com/KHammerschmidt/42cursus-ft_printf && 
cd ft_printf &&
git clone https://github.com/KHammerschmidt/42cursus-Libft
```
</br>

To create library libftprintf.a:
Create the library archive:
```bash
make
```

</br>

