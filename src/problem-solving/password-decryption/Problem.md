# Password Decryption

In a computer security course, you just learned about password decryption.
Your fellow student has created their own password encryption method, and they have aksed you to test how secure it is.
Your task is to recorver the original password given the encrypted password provided to you by your classmate.

At first, it seems impossible, But one day after class, you catch a peek of your classmate's notebook where the encryption process is noted.
You snap a quick picture of it to reference later. It says this:

Given string *s*, let *s[i]* represent the *i_th* character in the string s, using 0-based indexing.

1. Initially i = 0.
2. If *s[i]* is lowercase and the next character *s[i+1]* is uppercase, swap them, add a '\*' after them, and move to *i+2*.
3. If *s[i]* is a number, replace it with a *0*, place the original number at the start and move to *i+1*.
4. Else move to *i+1*.
5. Stop if *i* is more than or equal to the string length. Otherwise, go to step 2.

There is even an example mentioned in the notebook. When encrypted the string "hAck3rr4nk" becomes "43Ah*ck0rr0nk". 
(Note: the original string, "hAck3rr4nk", does not contain the character 0.)

Note:

- The original string always contains digits from 1 to 9 and does not contain 0.
- The original string always contains only alpha-numeric characters.

Using this information, your task is to determine the original password (before encryption) when given the encrypted password from your classmate.

### Sample Case 0

Sample Input for Custom Testing

```
51Pa*0Lp*0e
```

Sample Output

```
aP1pL5e
```

### Sample Case 1

Sample Input for Custom Testing

```
pTo*Ta*O
```

Sample Output

```
poTaTO
```
