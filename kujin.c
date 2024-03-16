using System;
using System.Diagnostics;
using System.IO;

namespace DioffPalaiyot
{
    class Program
    {
        static void Main(string[] args)
        {
            string notepadContent = "Hello, I'm Gab. I do coding for fun.\n\n";
  
            notepadContent += "secretmydaypalangnmo:\n\n";
            notepadContent += "using System;\n\n";
            notepadContent += "class RandomPasswordGenerator\n";
            notepadContent += "{\n";
            notepadContent += "    static string GenerateRandomPassword(int length = 12)\n";
            notepadContent += "    {\n";
            notepadContent += "        string characters = \"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+[]{}|;:,.<>?\";\n";
            notepadContent += "        Random random = new Random();\n";
            notepadContent += "        char[] password = new char[12];\n";
            notepadContent += "        for (int i = 0; i < length; i++)\n";
            notepadContent += "        {\n";
            notepadContent += "            password[i] = characters[random.Next(characters.Length)];\n";
            notepadContent += "        }\n";
            notepadContent += "        return new string(password);\n";
            notepadContent += "    }\n\n";
            notepadContent += "    static void Main()\n";
            notepadContent += "    {\n";
            notepadContent += "        string randomPassword = GenerateRandomPassword();\n";
            notepadContent += "        Console.WriteLine($\"Random Password: {randomPassword}\");\n";
            notepadContent += "    }\n";
            notepadContent += "}\n";

            string filePath = "kujinpwgen_notepad.txt";
            File.WriteAllText(filePath, notepadContent);

            Console.WriteLine($"Notepad content saved to {filePath}");
        }
    }
}
