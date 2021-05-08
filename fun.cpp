using System;
using System.Linq;
 
public static class Kata
{
  public static string ReverseWords(string str)
  {
            string[] words = str.Split(new string[] { " " }, StringSplitOptions.RemoveEmptyEntries);
            string _str = string.Empty;
            foreach (var word in words)
            {
            for (int i = word.Length - 1; i >= 0; i--)
            {
             _str += word[i];
            }
            if (word != words.Last()) _str += " ";
            }
            return _str;
  }
