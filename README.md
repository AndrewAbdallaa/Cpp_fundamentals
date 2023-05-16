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

## [**Data types - Integer**](./data_types_integer)

* :
   * int => Integer
   * Test Numbers
   * Test Floating Point vs Int
   * Store From -2147483648 To 2147483647
   * INT_MIN and INT_MAX Constants
   * Check Limits Header File limits.h
   * Test Size Of Data Types Without Variables & Use End Line

   * = Assignment Operator

## [**Data types - Float and Double**](./data_types-float_and_double)

* :
  * float => Floating Point Number
  * Test Integer Value In Float Variable
  * We Make Sure Its Float Not Double By Adding Suffix "f" Or "F"
  * Test With Auto
  * 7 Decimal Precision

* :
  * double => Double The Float
  * 15 Decimal Precision

## [**Data types - Char and ASCII value**](./data_types-char_and_ASCII_value)

* :
  * char => Character
  * Added Inside Single Quotes => Test With Auto
  * ASCII Value
  * ASCII => American Standard Code for Information Interchange.
  * A Way of Representing Characters As Numbers

## [**Data types - Bool and Void**](./data_types-bool_and_void)

* :
  * bool => Boolean
  * Only Two Possible Values [true, false]
  * Value Is Case Sensitive
  * When We Use Boolean Values
  * Anything Has On/Off, Yes/No, True/False
  * Test Boolean In Math
  * Test > And <
  * Test Data [100, 0, -100, ""]

  - void => Valueless
  - Without Value

## [**Data types - Modifiers and type Aliases**](./data_types-modifiers_and_type_aliases)

* Modifiers
  * Modify The Length Of Data => See Limits

* Signed [int, char]
  * Store Positive, Negative Integers And 0
  * int Is Signed By Default

* Unsigned [int, char]
  * Store Positive Only

* Short [int]
  * Can Be short Instead of short int

* Long [int, double]
  * Store Maximum Value
  * Can Be long Instead of long int

* Type Alias
  * using identifier = type;
  * typedef unsigned long UL;

## [**Data types - type conversion**](./data_types-type_conversion)

* Type Conversion
  * Convert Data of One Type To Another

* Implicit Conversion
  * Conversion Is Done Automatically By The Compiler

* Explicit Conversion AKA Type Casting
  * Conversion Is Done By The Programmer

* Data Loss
  * When Larger Type Is Converted To Smaller Type

## [**Operators - Arithmetic operators**](./operators-arithmetic_operators)

* Operators & Operands
  * "Symbols To Operate On Data"

* Arithmetic Operators
  * "For Mathematical Operations"

  --- + => Addition
  --- - => Subtraction
  --- * => Multiplication
  --- / => Division
  --- % => Modulo => Remainder After Division

* What Is Operand ?
  * The Part Of an Instruction Representing The Data Manipulated by The Operator
*/

## [**Operators - Assignmet operators**](./operators-assignment_operators)

## [**Operators - Increment & Decrement operators**](./operators-increment_decrement%20operators)

* Increment And Decrement Operators
  * "For incrementing And Decrementing Values"

  * Pre/Post Increment
  * Pre/Post Decrement

## [**Operators - Comparison operators**](./operators-comparison_operators)

* == Equal
* != Not Equal
* -> Greater Than
* < Less Than
* ->= Greater Than Or Equal
* <= Less Than Or Equal

## [**Operators - Logical operators**](./operators-logical_operators)

* && And
* || Or
* ! Not

## [**Operators - Precedence**](./operators-precedence)

* :
  * Bitwise Operators
  * Spaceship Operator

## [**Control flow - if condition introduction**](./control_flow-if_condition_introduction)

* Syntax
    > if (Condition Is True)
    > {
    >   // Do Something
    > }

## [**Control flow - if, else if, else**](./control_flow-if_else)

## [**Control flow - nested if condition**](./control_flow-nested_if)

## [**Control flow - Ternary conditional operator**](./control_flow-ternary_conditional_operator)

* Syntax:
    * (condition) ? true : false;

## [**Control flow - Nested ternary operator**](./control_flow-nested_ternary%20operator/)


## [**Condition trainings - Create four applications**](./condition_trainings-create_four_application)

* Even / Odd Checker
* Find Greatest Number
* User Rank Checker
* Simple Calculator

## [**Control flow - Switch, Case**]