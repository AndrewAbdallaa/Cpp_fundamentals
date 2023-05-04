# C++ fundamentals course

##  [**comments**](./comments)

* :
  * // comment
  * /* 
       comment
    */
  * /* comment */

##  [**Variables Basic Knowledge**](./variables_basic_knowledge) 

* :
  * Data Container With Unique Name "Identifier"
  * Declare With Value + Change Later

* **Syntax**

  * [Data_Type] [Variable_Name] = [Value]

##  [**variables naming rules**](./variables_naming_rules)


* Naming Rules
  * Must Be Unique
  * Case Sensitive
  * Cannot Start With Numbers
  * Nums Or Letters Or Underscore
  * No White Space Or Special Characters
  * Reserved Keywords "Class, Public"

* Best Practices
  * Related Names
  * Writing Style

## [**variables advanced knowledge**](./variables_advanced_knowledge)

## [**variables scope**](./variables_scope)

* Global Variable  ==> before the main function
* Local Variable   ==> in the function

## [**variables constant**](./variables_constant)

* Read Only Value
* Can't Declare Without Value
* assign  ==> 
	* Syntax: [#define] [variable_name] [value]

## [**Escape sequences characters**](./escape_sequences_characters)


* Special Non Printing Characters
* Control Printing Behaviour
* Start With Back Slash \\
* Can Be Inserted In Any Position
  - \n
  - \\
  - \"
  - \'
  - \t => Tab Equal 8 Spaces
  - \b
  - \a => Alert => Play Beep During Execution
  - \r => Carriage Return

## [**Data types - What is data**](./data_types-what_is_data)

* :
    * Integer => 5000, 10, -100
    * String => "Elzero Web School", "Osama Elzero", "100A"
    * Boolean => true, false
    * Float => 18.5, 1900.50
    * Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
- Why We Choose Data ?
    * Size
    * Operation

- What Is Operand ?
    * The Part Of an Instruction Representing The Data Manipulated by The Operator

## [**Data types, sizes and memory**](./data_types_sizes_and_memory)

* :
  * Ram [R]andom [A]ccess [M]emory
  * Computer Memory Has Locations

* Data Sizes
  * Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  * Byte => A Group of 8 => Store Single Character
  * Kilo Byte => 1024 Byte
  * Mega Byte => 1024 Kilobytes
  * Giga Byte => 1024 Megabytes
  * Tera Byte => 1024 Gigabytes

* Data Types With Size
  * int => 2 Or 4 Bytes => Will Cover Later Why
  * float => 4 Bytes [18.5656565656]
  * double => 8 Bytes [18.5656565656]
  * Number . Fractional Component
  * char => 1 Byte => "A" "x" "9"
  * boolean => 1 Byte => true, false
  * Double vs Float

* The Story Behind Creating A Variable
  * Declare A Variable
  * Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  * Restrict Type Of Data To The Type We Choosed

  ** Declare Variable Without Type

  ** See Memory Address &
