using System;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;

namespace EmployeeApp
{
    public partial class MainWindow : Window
    {
        private string generatedPassword = string.Empty;

        public MainWindow()
        {
            InitializeComponent();
        }
        private void btnGeneratePassword_Click(object sender, RoutedEventArgs e)
        {
            if (!int.TryParse(txtPasswordLength.Text, out int passwordLength) || passwordLength <= 0)
            {
                MessageBox.Show("Proszę wprowadzić poprawną liczbę znaków.");
                return;
            }
            const string letters = "abcdefghijklmnopqrstuvwxyz";
            const string capitalLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            const string digits = "0123456789";
            const string specialChars = "!@#$%^&*()_+-=";
            StringBuilder password = new StringBuilder();
            Random rand = new Random();
            if (chkLetters.IsChecked == true)
            {
                password.Append(letters[rand.Next(letters.Length)]);
                password.Append(capitalLetters[rand.Next(capitalLetters.Length)]);
            }
            if (chkDigits.IsChecked == true)
            {
                password.Append(digits[rand.Next(digits.Length)]);
            }
            if (chkSpecialChars.IsChecked == true)
            {
                password.Append(specialChars[rand.Next(specialChars.Length)]);
            }
            string allChars = letters;
            if (chkLetters.IsChecked == true) allChars += capitalLetters;
            if (chkDigits.IsChecked == true) allChars += digits;
            if (chkSpecialChars.IsChecked == true) allChars += specialChars;

            while (password.Length < passwordLength)
            {
                password.Append(allChars[rand.Next(allChars.Length)]);
            }
            generatedPassword = new string(password.ToString().OrderBy(_ => rand.Next()).ToArray());
            MessageBox.Show(generatedPassword);
        }
        private void btnSubmit_Click(object sender, RoutedEventArgs e)
        {
            string firstName = txtFirstName.Text;
            string lastName = txtLastName.Text;
            string position = ((ComboBoxItem)cmbPosition.SelectedItem)?.Content.ToString() ?? "Nie wybrano";
            MessageBox.Show($"Dane pracownika: {firstName} {lastName} {position} Hasło: {generatedPassword}");
        }
    }
}
