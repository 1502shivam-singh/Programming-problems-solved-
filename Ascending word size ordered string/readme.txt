Word ordered string -
This is a question asked in the hackerrank open engineering challenge, solved by me in C++.
The question follows this - 
Rearrange the words in a sentence while respecting the following conditions:

1) Each word ordered by length ascending.
2) Words of equal length must appear in the same order as in the original sentence.
3) The rearranged sentence must be formatted to satisfy the regular expression ^[A-Z][a-z]*\.$

Example
sentence = Cats and hats.

Order the sentence by word's length and keep the original order for the words with the same length 
- Length 3: [and]
- Length 4: [Cats, hats]
Reassemble the sequence of words so that the first letter is uppercase, the intermediate are lowercase and the last one is a period
The result is-
"Ands cats hats."
